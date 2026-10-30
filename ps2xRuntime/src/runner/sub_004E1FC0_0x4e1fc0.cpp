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

// Function: sub_004E1FC0
// Address: 0x4e1fc0 - 0x4e2170
void sub_004E1FC0_0x4e1fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1FC0_0x4e1fc0");
#endif

    switch (ctx->pc) {
        case 0x4e2014u: goto label_4e2014;
        case 0x4e2048u: goto label_4e2048;
        case 0x4e20a0u: goto label_4e20a0;
        case 0x4e20d0u: goto label_4e20d0;
        case 0x4e212cu: goto label_4e212c;
        case 0x4e2140u: goto label_4e2140;
        case 0x4e2150u: goto label_4e2150;
        default: break;
    }

    ctx->pc = 0x4e1fc0u;

    // 0x4e1fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e1fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e1fc4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4e1fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1fc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e1fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4e1fcc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e1fccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1fd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e1fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e1fd4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e1fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e1fd8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e1fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e1fdc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e1fe0: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4E1FE0u;
    {
        const bool branch_taken_0x4e1fe0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E1FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1FE0u;
        // 0x4e1fe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1fe0) {
            ctx->pc = 0x4E201Cu;
            goto label_4e201c;
        }
    }
    ctx->pc = 0x4E1FE8u;
    // 0x4e1fe8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4e1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4e1fec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E1FECu;
    {
        const bool branch_taken_0x4e1fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1fec) {
            ctx->pc = 0x4E1FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1FECu;
            // 0x4e1ff0: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E200Cu;
            goto label_4e200c;
        }
    }
    ctx->pc = 0x4E1FF4u;
    // 0x4e1ff4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e1ff8: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4e1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4e1ffc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e1ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e2000: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4E2000u;
    {
        const bool branch_taken_0x4e2000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2000) {
            ctx->pc = 0x4E2138u;
            goto label_4e2138;
        }
    }
    ctx->pc = 0x4E2008u;
    // 0x4e2008: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e2008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e200c:
    // 0x4e200c: 0xc13879a  jal         func_4E1E68
    ctx->pc = 0x4E200Cu;
    SET_GPR_U32(ctx, 31, 0x4E2014u);
    ctx->pc = 0x4E2010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E200Cu;
    // 0x4e2010: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1E68u, 0x4E200Cu, 0x4E2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2014u;
label_4e2014:
    // 0x4e2014: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4E2014u;
    {
        const bool branch_taken_0x4e2014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2014u;
        // 0x4e2018: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2014) {
            ctx->pc = 0x4E2154u;
            goto label_4e2154;
        }
    }
    ctx->pc = 0x4E201Cu;
label_4e201c:
    // 0x4e201c: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4E201Cu;
    {
        const bool branch_taken_0x4e201c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e201c) {
            ctx->pc = 0x4E2020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E201Cu;
            // 0x4e2020: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2050u;
            goto label_4e2050;
        }
    }
    ctx->pc = 0x4E2024u;
    // 0x4e2024: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4e2024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4e2028: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e2028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e202c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e2030: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e2030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e2034: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4E2034u;
    {
        const bool branch_taken_0x4e2034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2034u;
        // 0x4e2038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2034) {
            ctx->pc = 0x4E2124u;
            goto label_4e2124;
        }
    }
    ctx->pc = 0x4E203Cu;
    // 0x4e203c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e203cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2040: 0xc13879a  jal         func_4E1E68
    ctx->pc = 0x4E2040u;
    SET_GPR_U32(ctx, 31, 0x4E2048u);
    ctx->pc = 0x4E2044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2040u;
    // 0x4e2044: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1E68u, 0x4E2040u, 0x4E2048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2048u;
label_4e2048:
    // 0x4e2048: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4E2048u;
    {
        const bool branch_taken_0x4e2048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2048u;
        // 0x4e204c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2048) {
            ctx->pc = 0x4E2154u;
            goto label_4e2154;
        }
    }
    ctx->pc = 0x4E2050u;
label_4e2050:
    // 0x4e2050: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e2050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e2054: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E2054u;
    {
        const bool branch_taken_0x4e2054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2054u;
        // 0x4e2058: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2054) {
            ctx->pc = 0x4E2078u;
            goto label_4e2078;
        }
    }
    ctx->pc = 0x4E205Cu;
    // 0x4e205c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4e205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4e2060: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4e2060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e2064: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E2064u;
    {
        const bool branch_taken_0x4e2064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e2064) {
            ctx->pc = 0x4E2068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2064u;
            // 0x4e2068: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E207Cu;
            goto label_4e207c;
        }
    }
    ctx->pc = 0x4E206Cu;
    // 0x4e206c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4e206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e2070: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4E2070u;
    {
        const bool branch_taken_0x4e2070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2070u;
        // 0x4e2074: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2070) {
            ctx->pc = 0x4E20E8u;
            goto label_4e20e8;
        }
    }
    ctx->pc = 0x4E2078u;
label_4e2078:
    // 0x4e2078: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e2078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e207c:
    // 0x4e207c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e2080: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4E2080u;
    {
        const bool branch_taken_0x4e2080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2080) {
            ctx->pc = 0x4E2084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2080u;
            // 0x4e2084: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E20C0u;
            goto label_4e20c0;
        }
    }
    ctx->pc = 0x4E2088u;
    // 0x4e2088: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e2088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e208c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e2090: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E2090u;
    {
        const bool branch_taken_0x4e2090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2090) {
            ctx->pc = 0x4E2094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2090u;
            // 0x4e2094: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E20E8u;
            goto label_4e20e8;
        }
    }
    ctx->pc = 0x4E2098u;
    // 0x4e2098: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e2098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e209c: 0x0  nop
    ctx->pc = 0x4e209cu;
    // NOP
label_4e20a0:
    // 0x4e20a0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e20a4: 0x0  nop
    ctx->pc = 0x4e20a4u;
    // NOP
    // 0x4e20a8: 0x0  nop
    ctx->pc = 0x4e20a8u;
    // NOP
    // 0x4e20ac: 0x0  nop
    ctx->pc = 0x4e20acu;
    // NOP
    // 0x4e20b0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E20B0u;
    {
        const bool branch_taken_0x4e20b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e20b0) {
            ctx->pc = 0x4E20B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E20B0u;
            // 0x4e20b4: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E20A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e20a0;
        }
    }
    ctx->pc = 0x4E20B8u;
    // 0x4e20b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E20B8u;
    {
        const bool branch_taken_0x4e20b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E20B8u;
        // 0x4e20bc: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e20b8) {
            ctx->pc = 0x4E20E8u;
            goto label_4e20e8;
        }
    }
    ctx->pc = 0x4E20C0u;
label_4e20c0:
    // 0x4e20c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e20c4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E20C4u;
    {
        const bool branch_taken_0x4e20c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E20C4u;
        // 0x4e20c8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e20c4) {
            ctx->pc = 0x4E20E8u;
            goto label_4e20e8;
        }
    }
    ctx->pc = 0x4E20CCu;
    // 0x4e20cc: 0x0  nop
    ctx->pc = 0x4e20ccu;
    // NOP
label_4e20d0:
    // 0x4e20d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e20d4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e20d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e20dc: 0x0  nop
    ctx->pc = 0x4e20dcu;
    // NOP
    // 0x4e20e0: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E20E0u;
    {
        const bool branch_taken_0x4e20e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E20E0u;
        // 0x4e20e4: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e20e0) {
            ctx->pc = 0x4E20D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e20d0;
        }
    }
    ctx->pc = 0x4E20E8u;
label_4e20e8:
    // 0x4e20e8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4e20e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e20ec: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4e20ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e20f0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e20f4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4e20f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4e20f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E20F8u;
    {
        const bool branch_taken_0x4e20f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E20F8u;
        // 0x4e20fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e20f8) {
            ctx->pc = 0x4E210Cu;
            goto label_4e210c;
        }
    }
    ctx->pc = 0x4E2100u;
    // 0x4e2100: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4e2100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e2104: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4e2104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4e2108: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4e2108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e210c:
    // 0x4e210c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4E210Cu;
    {
        const bool branch_taken_0x4e210c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E210Cu;
        // 0x4e2110: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e210c) {
            ctx->pc = 0x4E2148u;
            goto label_4e2148;
        }
    }
    ctx->pc = 0x4E2114u;
    // 0x4e2114: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e2114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e2118: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E2118u;
    {
        const bool branch_taken_0x4e2118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2118) {
            ctx->pc = 0x4E211Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2118u;
            // 0x4e211c: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2134u;
            goto label_4e2134;
        }
    }
    ctx->pc = 0x4E2120u;
    // 0x4e2120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2124:
    // 0x4e2124: 0xc1386a6  jal         func_4E1A98
    ctx->pc = 0x4E2124u;
    SET_GPR_U32(ctx, 31, 0x4E212Cu);
    ctx->pc = 0x4E2128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2124u;
    // 0x4e2128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1A98u, 0x4E2124u, 0x4E212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E212Cu;
label_4e212c:
    // 0x4e212c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E212Cu;
    {
        const bool branch_taken_0x4e212c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E212Cu;
        // 0x4e2130: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e212c) {
            ctx->pc = 0x4E215Cu;
            goto label_4e215c;
        }
    }
    ctx->pc = 0x4E2134u;
label_4e2134:
    // 0x4e2134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2138:
    // 0x4e2138: 0xc1386a6  jal         func_4E1A98
    ctx->pc = 0x4E2138u;
    SET_GPR_U32(ctx, 31, 0x4E2140u);
    ctx->pc = 0x4E213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2138u;
    // 0x4e213c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1A98u, 0x4E2138u, 0x4E2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2140u;
label_4e2140:
    // 0x4e2140: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E2140u;
    {
        const bool branch_taken_0x4e2140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2140u;
        // 0x4e2144: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2140) {
            ctx->pc = 0x4E215Cu;
            goto label_4e215c;
        }
    }
    ctx->pc = 0x4E2148u;
label_4e2148:
    // 0x4e2148: 0xc13879a  jal         func_4E1E68
    ctx->pc = 0x4E2148u;
    SET_GPR_U32(ctx, 31, 0x4E2150u);
    ctx->pc = 0x4E214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2148u;
    // 0x4e214c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1E68u, 0x4E2148u, 0x4E2150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2150u;
label_4e2150:
    // 0x4e2150: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4e2150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2154:
    // 0x4e2154: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e2154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e2158: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e2158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e215c:
    // 0x4e215c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e215cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2160: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e2160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e2164: 0x3e00008  jr          $ra
    ctx->pc = 0x4E2164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2164u;
        // 0x4e2168: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E216Cu;
    // 0x4e216c: 0x0  nop
    ctx->pc = 0x4e216cu;
    // NOP
    ctx->pc = 0x4e2170u;
}
