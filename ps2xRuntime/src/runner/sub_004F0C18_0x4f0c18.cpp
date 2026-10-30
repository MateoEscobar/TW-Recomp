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

// Function: sub_004F0C18
// Address: 0x4f0c18 - 0x4f0dc8
void sub_004F0C18_0x4f0c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0C18_0x4f0c18");
#endif

    switch (ctx->pc) {
        case 0x4f0c6cu: goto label_4f0c6c;
        case 0x4f0ca0u: goto label_4f0ca0;
        case 0x4f0cf8u: goto label_4f0cf8;
        case 0x4f0d28u: goto label_4f0d28;
        case 0x4f0d84u: goto label_4f0d84;
        case 0x4f0d98u: goto label_4f0d98;
        case 0x4f0da8u: goto label_4f0da8;
        default: break;
    }

    ctx->pc = 0x4f0c18u;

    // 0x4f0c18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f0c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4f0c1c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4f0c1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0c20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f0c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4f0c24: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4f0c24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0c28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f0c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f0c2c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4f0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4f0c30: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4f0c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f0c34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4f0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4f0c38: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4F0C38u;
    {
        const bool branch_taken_0x4f0c38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4F0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C38u;
        // 0x4f0c3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0c38) {
            ctx->pc = 0x4F0C74u;
            goto label_4f0c74;
        }
    }
    ctx->pc = 0x4F0C40u;
    // 0x4f0c40: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4f0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4f0c44: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F0C44u;
    {
        const bool branch_taken_0x4f0c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0c44) {
            ctx->pc = 0x4F0C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0C44u;
            // 0x4f0c48: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0C64u;
            goto label_4f0c64;
        }
    }
    ctx->pc = 0x4F0C4Cu;
    // 0x4f0c4c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f0c50: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x4f0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4f0c54: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4f0c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f0c58: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4F0C58u;
    {
        const bool branch_taken_0x4f0c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0c58) {
            ctx->pc = 0x4F0D90u;
            goto label_4f0d90;
        }
    }
    ctx->pc = 0x4F0C60u;
    // 0x4f0c60: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4f0c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4f0c64:
    // 0x4f0c64: 0xc13c2b0  jal         func_4F0AC0
    ctx->pc = 0x4F0C64u;
    SET_GPR_U32(ctx, 31, 0x4F0C6Cu);
    ctx->pc = 0x4F0C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0C64u;
    // 0x4f0c68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F0AC0u, 0x4F0C64u, 0x4F0C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0C6Cu;
label_4f0c6c:
    // 0x4f0c6c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4F0C6Cu;
    {
        const bool branch_taken_0x4f0c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C6Cu;
        // 0x4f0c70: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0c6c) {
            ctx->pc = 0x4F0DACu;
            goto label_4f0dac;
        }
    }
    ctx->pc = 0x4F0C74u;
label_4f0c74:
    // 0x4f0c74: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4F0C74u;
    {
        const bool branch_taken_0x4f0c74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f0c74) {
            ctx->pc = 0x4F0C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0C74u;
            // 0x4f0c78: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0CA8u;
            goto label_4f0ca8;
        }
    }
    ctx->pc = 0x4F0C7Cu;
    // 0x4f0c7c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x4f0c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4f0c80: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f0c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f0c84: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4f0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4f0c88: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4f0c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f0c8c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4F0C8Cu;
    {
        const bool branch_taken_0x4f0c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C8Cu;
        // 0x4f0c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0c8c) {
            ctx->pc = 0x4F0D7Cu;
            goto label_4f0d7c;
        }
    }
    ctx->pc = 0x4F0C94u;
    // 0x4f0c94: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4f0c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0c98: 0xc13c2b0  jal         func_4F0AC0
    ctx->pc = 0x4F0C98u;
    SET_GPR_U32(ctx, 31, 0x4F0CA0u);
    ctx->pc = 0x4F0C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0C98u;
    // 0x4f0c9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F0AC0u, 0x4F0C98u, 0x4F0CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0CA0u;
label_4f0ca0:
    // 0x4f0ca0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4F0CA0u;
    {
        const bool branch_taken_0x4f0ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CA0u;
        // 0x4f0ca4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0ca0) {
            ctx->pc = 0x4F0DACu;
            goto label_4f0dac;
        }
    }
    ctx->pc = 0x4F0CA8u;
label_4f0ca8:
    // 0x4f0ca8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f0cac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F0CACu;
    {
        const bool branch_taken_0x4f0cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CACu;
        // 0x4f0cb0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0cac) {
            ctx->pc = 0x4F0CD0u;
            goto label_4f0cd0;
        }
    }
    ctx->pc = 0x4F0CB4u;
    // 0x4f0cb4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4f0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4f0cb8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4f0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4f0cbc: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F0CBCu;
    {
        const bool branch_taken_0x4f0cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x4f0cbc) {
            ctx->pc = 0x4F0CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0CBCu;
            // 0x4f0cc0: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0CD4u;
            goto label_4f0cd4;
        }
    }
    ctx->pc = 0x4F0CC4u;
    // 0x4f0cc4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4f0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4f0cc8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4F0CC8u;
    {
        const bool branch_taken_0x4f0cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CC8u;
        // 0x4f0ccc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0cc8) {
            ctx->pc = 0x4F0D40u;
            goto label_4f0d40;
        }
    }
    ctx->pc = 0x4F0CD0u;
label_4f0cd0:
    // 0x4f0cd0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f0cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4f0cd4:
    // 0x4f0cd4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4f0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4f0cd8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4F0CD8u;
    {
        const bool branch_taken_0x4f0cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0cd8) {
            ctx->pc = 0x4F0CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0CD8u;
            // 0x4f0cdc: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0D18u;
            goto label_4f0d18;
        }
    }
    ctx->pc = 0x4F0CE0u;
    // 0x4f0ce0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4f0ce0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0ce4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4f0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4f0ce8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4F0CE8u;
    {
        const bool branch_taken_0x4f0ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0ce8) {
            ctx->pc = 0x4F0CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0CE8u;
            // 0x4f0cec: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0D40u;
            goto label_4f0d40;
        }
    }
    ctx->pc = 0x4F0CF0u;
    // 0x4f0cf0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4f0cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4f0cf4: 0x0  nop
    ctx->pc = 0x4f0cf4u;
    // NOP
label_4f0cf8:
    // 0x4f0cf8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4f0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4f0cfc: 0x0  nop
    ctx->pc = 0x4f0cfcu;
    // NOP
    // 0x4f0d00: 0x0  nop
    ctx->pc = 0x4f0d00u;
    // NOP
    // 0x4f0d04: 0x0  nop
    ctx->pc = 0x4f0d04u;
    // NOP
    // 0x4f0d08: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4F0D08u;
    {
        const bool branch_taken_0x4f0d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0d08) {
            ctx->pc = 0x4F0D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0D08u;
            // 0x4f0d0c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f0cf8;
        }
    }
    ctx->pc = 0x4F0D10u;
    // 0x4f0d10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4F0D10u;
    {
        const bool branch_taken_0x4f0d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D10u;
        // 0x4f0d14: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0d10) {
            ctx->pc = 0x4F0D40u;
            goto label_4f0d40;
        }
    }
    ctx->pc = 0x4F0D18u;
label_4f0d18:
    // 0x4f0d18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f0d1c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F0D1Cu;
    {
        const bool branch_taken_0x4f0d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4F0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D1Cu;
        // 0x4f0d20: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0d1c) {
            ctx->pc = 0x4F0D40u;
            goto label_4f0d40;
        }
    }
    ctx->pc = 0x4F0D24u;
    // 0x4f0d24: 0x0  nop
    ctx->pc = 0x4f0d24u;
    // NOP
label_4f0d28:
    // 0x4f0d28: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4f0d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4f0d2c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f0d30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f0d34: 0x0  nop
    ctx->pc = 0x4f0d34u;
    // NOP
    // 0x4f0d38: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4F0D38u;
    {
        const bool branch_taken_0x4f0d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D38u;
        // 0x4f0d3c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0d38) {
            ctx->pc = 0x4F0D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f0d28;
        }
    }
    ctx->pc = 0x4F0D40u;
label_4f0d40:
    // 0x4f0d40: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4f0d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0d44: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4f0d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f0d48: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4f0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4f0d4c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4f0d4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4f0d50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F0D50u;
    {
        const bool branch_taken_0x4f0d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D50u;
        // 0x4f0d54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0d50) {
            ctx->pc = 0x4F0D64u;
            goto label_4f0d64;
        }
    }
    ctx->pc = 0x4F0D58u;
    // 0x4f0d58: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4f0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f0d5c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x4f0d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4f0d60: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4f0d60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f0d64:
    // 0x4f0d64: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4F0D64u;
    {
        const bool branch_taken_0x4f0d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D64u;
        // 0x4f0d68: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0d64) {
            ctx->pc = 0x4F0DA0u;
            goto label_4f0da0;
        }
    }
    ctx->pc = 0x4F0D6Cu;
    // 0x4f0d6c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4f0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4f0d70: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F0D70u;
    {
        const bool branch_taken_0x4f0d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0d70) {
            ctx->pc = 0x4F0D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0D70u;
            // 0x4f0d74: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0D8Cu;
            goto label_4f0d8c;
        }
    }
    ctx->pc = 0x4F0D78u;
    // 0x4f0d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f0d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f0d7c:
    // 0x4f0d7c: 0xc13c1ba  jal         func_4F06E8
    ctx->pc = 0x4F0D7Cu;
    SET_GPR_U32(ctx, 31, 0x4F0D84u);
    ctx->pc = 0x4F0D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0D7Cu;
    // 0x4f0d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F06E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F06E8u, 0x4F0D7Cu, 0x4F0D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0D84u;
label_4f0d84:
    // 0x4f0d84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4F0D84u;
    {
        const bool branch_taken_0x4f0d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D84u;
        // 0x4f0d88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0d84) {
            ctx->pc = 0x4F0DB4u;
            goto label_4f0db4;
        }
    }
    ctx->pc = 0x4F0D8Cu;
label_4f0d8c:
    // 0x4f0d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f0d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f0d90:
    // 0x4f0d90: 0xc13c1ba  jal         func_4F06E8
    ctx->pc = 0x4F0D90u;
    SET_GPR_U32(ctx, 31, 0x4F0D98u);
    ctx->pc = 0x4F0D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0D90u;
    // 0x4f0d94: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F06E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F06E8u, 0x4F0D90u, 0x4F0D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0D98u;
label_4f0d98:
    // 0x4f0d98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4F0D98u;
    {
        const bool branch_taken_0x4f0d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D98u;
        // 0x4f0d9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0d98) {
            ctx->pc = 0x4F0DB4u;
            goto label_4f0db4;
        }
    }
    ctx->pc = 0x4F0DA0u;
label_4f0da0:
    // 0x4f0da0: 0xc13c2b0  jal         func_4F0AC0
    ctx->pc = 0x4F0DA0u;
    SET_GPR_U32(ctx, 31, 0x4F0DA8u);
    ctx->pc = 0x4F0DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0DA0u;
    // 0x4f0da4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F0AC0u, 0x4F0DA0u, 0x4F0DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0DA8u;
label_4f0da8:
    // 0x4f0da8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4f0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0dac:
    // 0x4f0dac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f0db0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f0db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f0db4:
    // 0x4f0db4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f0db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f0db8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f0db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f0dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0DBCu;
        // 0x4f0dc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0DC4u;
    // 0x4f0dc4: 0x0  nop
    ctx->pc = 0x4f0dc4u;
    // NOP
    ctx->pc = 0x4f0dc8u;
}
