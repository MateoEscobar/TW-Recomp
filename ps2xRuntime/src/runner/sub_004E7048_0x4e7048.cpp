#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E7048
// Address: 0x4e7048 - 0x4e71f8
void sub_004E7048_0x4e7048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7048_0x4e7048");
#endif

    switch (ctx->pc) {
        case 0x4e709cu: goto label_4e709c;
        case 0x4e70d0u: goto label_4e70d0;
        case 0x4e7128u: goto label_4e7128;
        case 0x4e7158u: goto label_4e7158;
        case 0x4e71b4u: goto label_4e71b4;
        case 0x4e71c8u: goto label_4e71c8;
        case 0x4e71d8u: goto label_4e71d8;
        default: break;
    }

    ctx->pc = 0x4e7048u;

    // 0x4e7048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e7048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e704c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4e704cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7050: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e7050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4e7054: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e7054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7058: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e7058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e705c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e7060: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e7060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e7064: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e7064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e7068: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E7068u;
    {
        const bool branch_taken_0x4e7068 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7068u;
        // 0x4e706c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7068) {
            ctx->pc = 0x4E70A4u;
            goto label_4e70a4;
        }
    }
    ctx->pc = 0x4E7070u;
    // 0x4e7070: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4e7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4e7074: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E7074u;
    {
        const bool branch_taken_0x4e7074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7074) {
            ctx->pc = 0x4E7078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7074u;
            // 0x4e7078: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7094u;
            goto label_4e7094;
        }
    }
    ctx->pc = 0x4E707Cu;
    // 0x4e707c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e7080: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4e7080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4e7084: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e7084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e7088: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4E7088u;
    {
        const bool branch_taken_0x4e7088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7088) {
            ctx->pc = 0x4E71C0u;
            goto label_4e71c0;
        }
    }
    ctx->pc = 0x4E7090u;
    // 0x4e7090: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e7090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e7094:
    // 0x4e7094: 0xc139bbc  jal         func_4E6EF0
    ctx->pc = 0x4E7094u;
    SET_GPR_U32(ctx, 31, 0x4E709Cu);
    ctx->pc = 0x4E7098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7094u;
    // 0x4e7098: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6EF0u, 0x4E7094u, 0x4E709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E709Cu;
label_4e709c:
    // 0x4e709c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4E709Cu;
    {
        const bool branch_taken_0x4e709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E709Cu;
        // 0x4e70a0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e709c) {
            ctx->pc = 0x4E71DCu;
            goto label_4e71dc;
        }
    }
    ctx->pc = 0x4E70A4u;
label_4e70a4:
    // 0x4e70a4: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4E70A4u;
    {
        const bool branch_taken_0x4e70a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e70a4) {
            ctx->pc = 0x4E70A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E70A4u;
            // 0x4e70a8: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E70D8u;
            goto label_4e70d8;
        }
    }
    ctx->pc = 0x4E70ACu;
    // 0x4e70ac: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4e70acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4e70b0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e70b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e70b4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e70b8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e70b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e70bc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4E70BCu;
    {
        const bool branch_taken_0x4e70bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E70BCu;
        // 0x4e70c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e70bc) {
            ctx->pc = 0x4E71ACu;
            goto label_4e71ac;
        }
    }
    ctx->pc = 0x4E70C4u;
    // 0x4e70c4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e70c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e70c8: 0xc139bbc  jal         func_4E6EF0
    ctx->pc = 0x4E70C8u;
    SET_GPR_U32(ctx, 31, 0x4E70D0u);
    ctx->pc = 0x4E70CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E70C8u;
    // 0x4e70cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6EF0u, 0x4E70C8u, 0x4E70D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E70D0u;
label_4e70d0:
    // 0x4e70d0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4E70D0u;
    {
        const bool branch_taken_0x4e70d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E70D0u;
        // 0x4e70d4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e70d0) {
            ctx->pc = 0x4E71DCu;
            goto label_4e71dc;
        }
    }
    ctx->pc = 0x4E70D8u;
label_4e70d8:
    // 0x4e70d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e70dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E70DCu;
    {
        const bool branch_taken_0x4e70dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E70DCu;
        // 0x4e70e0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e70dc) {
            ctx->pc = 0x4E7100u;
            goto label_4e7100;
        }
    }
    ctx->pc = 0x4E70E4u;
    // 0x4e70e4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4e70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e70e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4e70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e70ec: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E70ECu;
    {
        const bool branch_taken_0x4e70ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e70ec) {
            ctx->pc = 0x4E70F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E70ECu;
            // 0x4e70f0: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7104u;
            goto label_4e7104;
        }
    }
    ctx->pc = 0x4E70F4u;
    // 0x4e70f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4e70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e70f8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4E70F8u;
    {
        const bool branch_taken_0x4e70f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E70F8u;
        // 0x4e70fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e70f8) {
            ctx->pc = 0x4E7170u;
            goto label_4e7170;
        }
    }
    ctx->pc = 0x4E7100u;
label_4e7100:
    // 0x4e7100: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e7100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e7104:
    // 0x4e7104: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e7104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e7108: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4E7108u;
    {
        const bool branch_taken_0x4e7108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7108) {
            ctx->pc = 0x4E710Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7108u;
            // 0x4e710c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7148u;
            goto label_4e7148;
        }
    }
    ctx->pc = 0x4E7110u;
    // 0x4e7110: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e7110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7114: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e7114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e7118: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E7118u;
    {
        const bool branch_taken_0x4e7118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7118) {
            ctx->pc = 0x4E711Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7118u;
            // 0x4e711c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7170u;
            goto label_4e7170;
        }
    }
    ctx->pc = 0x4E7120u;
    // 0x4e7120: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e7120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e7124: 0x0  nop
    ctx->pc = 0x4e7124u;
    // NOP
label_4e7128:
    // 0x4e7128: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e7128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e712c: 0x0  nop
    ctx->pc = 0x4e712cu;
    // NOP
    // 0x4e7130: 0x0  nop
    ctx->pc = 0x4e7130u;
    // NOP
    // 0x4e7134: 0x0  nop
    ctx->pc = 0x4e7134u;
    // NOP
    // 0x4e7138: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E7138u;
    {
        const bool branch_taken_0x4e7138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7138) {
            ctx->pc = 0x4E713Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7138u;
            // 0x4e713c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e7128;
        }
    }
    ctx->pc = 0x4E7140u;
    // 0x4e7140: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E7140u;
    {
        const bool branch_taken_0x4e7140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7140u;
        // 0x4e7144: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7140) {
            ctx->pc = 0x4E7170u;
            goto label_4e7170;
        }
    }
    ctx->pc = 0x4E7148u;
label_4e7148:
    // 0x4e7148: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e7148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e714c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E714Cu;
    {
        const bool branch_taken_0x4e714c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E714Cu;
        // 0x4e7150: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e714c) {
            ctx->pc = 0x4E7170u;
            goto label_4e7170;
        }
    }
    ctx->pc = 0x4E7154u;
    // 0x4e7154: 0x0  nop
    ctx->pc = 0x4e7154u;
    // NOP
label_4e7158:
    // 0x4e7158: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e7158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e715c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e7160: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e7160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e7164: 0x0  nop
    ctx->pc = 0x4e7164u;
    // NOP
    // 0x4e7168: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E7168u;
    {
        const bool branch_taken_0x4e7168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7168u;
        // 0x4e716c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7168) {
            ctx->pc = 0x4E7158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e7158;
        }
    }
    ctx->pc = 0x4E7170u;
label_4e7170:
    // 0x4e7170: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4e7170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7174: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e7174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e7178: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e7178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e717c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e717cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4e7180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E7180u;
    {
        const bool branch_taken_0x4e7180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7180u;
        // 0x4e7184: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7180) {
            ctx->pc = 0x4E7194u;
            goto label_4e7194;
        }
    }
    ctx->pc = 0x4E7188u;
    // 0x4e7188: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e7188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e718c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4e718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4e7190: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4e7190u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e7194:
    // 0x4e7194: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4E7194u;
    {
        const bool branch_taken_0x4e7194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7194u;
        // 0x4e7198: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7194) {
            ctx->pc = 0x4E71D0u;
            goto label_4e71d0;
        }
    }
    ctx->pc = 0x4E719Cu;
    // 0x4e719c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e71a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E71A0u;
    {
        const bool branch_taken_0x4e71a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e71a0) {
            ctx->pc = 0x4E71A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E71A0u;
            // 0x4e71a4: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E71BCu;
            goto label_4e71bc;
        }
    }
    ctx->pc = 0x4E71A8u;
    // 0x4e71a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e71a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e71ac:
    // 0x4e71ac: 0xc139ac8  jal         func_4E6B20
    ctx->pc = 0x4E71ACu;
    SET_GPR_U32(ctx, 31, 0x4E71B4u);
    ctx->pc = 0x4E71B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E71ACu;
    // 0x4e71b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6B20u, 0x4E71ACu, 0x4E71B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E71B4u;
label_4e71b4:
    // 0x4e71b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E71B4u;
    {
        const bool branch_taken_0x4e71b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E71B4u;
        // 0x4e71b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e71b4) {
            ctx->pc = 0x4E71E4u;
            goto label_4e71e4;
        }
    }
    ctx->pc = 0x4E71BCu;
label_4e71bc:
    // 0x4e71bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e71bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e71c0:
    // 0x4e71c0: 0xc139ac8  jal         func_4E6B20
    ctx->pc = 0x4E71C0u;
    SET_GPR_U32(ctx, 31, 0x4E71C8u);
    ctx->pc = 0x4E71C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E71C0u;
    // 0x4e71c4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6B20u, 0x4E71C0u, 0x4E71C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E71C8u;
label_4e71c8:
    // 0x4e71c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E71C8u;
    {
        const bool branch_taken_0x4e71c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E71C8u;
        // 0x4e71cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e71c8) {
            ctx->pc = 0x4E71E4u;
            goto label_4e71e4;
        }
    }
    ctx->pc = 0x4E71D0u;
label_4e71d0:
    // 0x4e71d0: 0xc139bbc  jal         func_4E6EF0
    ctx->pc = 0x4E71D0u;
    SET_GPR_U32(ctx, 31, 0x4E71D8u);
    ctx->pc = 0x4E71D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E71D0u;
    // 0x4e71d4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6EF0u, 0x4E71D0u, 0x4E71D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E71D8u;
label_4e71d8:
    // 0x4e71d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4e71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e71dc:
    // 0x4e71dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e71e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e71e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e71e4:
    // 0x4e71e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e71e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e71e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e71e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e71ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4E71ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E71F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E71ECu;
        // 0x4e71f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E71ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E71F4u;
    // 0x4e71f4: 0x0  nop
    ctx->pc = 0x4e71f4u;
    // NOP
    ctx->pc = 0x4e71f8u;
}
