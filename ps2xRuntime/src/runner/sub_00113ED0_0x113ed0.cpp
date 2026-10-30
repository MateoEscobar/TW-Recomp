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

// Function: sub_00113ED0
// Address: 0x113ed0 - 0x113ff0
void sub_00113ED0_0x113ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113ED0_0x113ed0");
#endif

    switch (ctx->pc) {
        case 0x113f10u: goto label_113f10;
        case 0x113f34u: goto label_113f34;
        case 0x113f58u: goto label_113f58;
        case 0x113f88u: goto label_113f88;
        case 0x113fb0u: goto label_113fb0;
        case 0x113fc0u: goto label_113fc0;
        default: break;
    }

    ctx->pc = 0x113ed0u;

    // 0x113ed0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x113ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x113ed4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x113ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x113ed8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x113ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x113edc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x113edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ee0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x113ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x113ee4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x113ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ee8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x113ee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113eec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x113eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x113ef0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x113ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x113ef4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x113ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ef8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x113ef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f00: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x113f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x113f04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x113f08: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x113F08u;
    SET_GPR_U32(ctx, 31, 0x113F10u);
    ctx->pc = 0x113F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F08u;
    // 0x113f0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x113F08u, 0x113F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F10u;
label_113f10:
    // 0x113f10: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x113F10u;
    {
        const bool branch_taken_0x113f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x113f10) {
            ctx->pc = 0x113F38u;
            goto label_113f38;
        }
    }
    ctx->pc = 0x113F18u;
    // 0x113f18: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x113f18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113f1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x113F1Cu;
    {
        const bool branch_taken_0x113f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F1Cu;
        // 0x113f20: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f1c) {
            ctx->pc = 0x113F38u;
            goto label_113f38;
        }
    }
    ctx->pc = 0x113F24u;
    // 0x113f24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f28: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x113f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    // 0x113f2c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x113F2Cu;
    SET_GPR_U32(ctx, 31, 0x113F34u);
    ctx->pc = 0x113F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F2Cu;
    // 0x113f30: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x113F2Cu, 0x113F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F34u;
label_113f34:
    // 0x113f34: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x113f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_113f38:
    // 0x113f38: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x113F38u;
    {
        const bool branch_taken_0x113f38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x113f38) {
            ctx->pc = 0x113F68u;
            goto label_113f68;
        }
    }
    ctx->pc = 0x113F40u;
    // 0x113f40: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x113f40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x113f44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113F44u;
    {
        const bool branch_taken_0x113f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F44u;
        // 0x113f48: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f44) {
            ctx->pc = 0x113F68u;
            goto label_113f68;
        }
    }
    ctx->pc = 0x113F4Cu;
    // 0x113f4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x113f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f50: 0xc050fda  jal         func_143F68
    ctx->pc = 0x113F50u;
    SET_GPR_U32(ctx, 31, 0x113F58u);
    ctx->pc = 0x113F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F50u;
    // 0x113f54: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x113F50u, 0x113F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F58u;
label_113f58:
    // 0x113f58: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x113f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x113f5c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x113f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x113f60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x113f64: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x113f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_113f68:
    // 0x113f68: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x113F68u;
    {
        const bool branch_taken_0x113f68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F68u;
        // 0x113f6c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f68) {
            ctx->pc = 0x113F9Cu;
            goto label_113f9c;
        }
    }
    ctx->pc = 0x113F70u;
    // 0x113f70: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x113f70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x113f74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x113F74u;
    {
        const bool branch_taken_0x113f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F74u;
        // 0x113f78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f74) {
            ctx->pc = 0x113F9Cu;
            goto label_113f9c;
        }
    }
    ctx->pc = 0x113F7Cu;
    // 0x113f7c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x113f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x113f80: 0xc050fda  jal         func_143F68
    ctx->pc = 0x113F80u;
    SET_GPR_U32(ctx, 31, 0x113F88u);
    ctx->pc = 0x113F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F80u;
    // 0x113f84: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x113F80u, 0x113F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F88u;
label_113f88:
    // 0x113f88: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x113f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x113f8c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x113f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x113f90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x113f94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x113f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x113f98: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x113f98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_113f9c:
    // 0x113f9c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x113f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113fa0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x113fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x113fa4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x113fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113fa8: 0xc044132  jal         func_1104C8
    ctx->pc = 0x113FA8u;
    SET_GPR_U32(ctx, 31, 0x113FB0u);
    ctx->pc = 0x113FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FA8u;
    // 0x113fac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104C8u, 0x113FA8u, 0x113FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FB0u;
label_113fb0:
    // 0x113fb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113fb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x113fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113fb8: 0xc106802  jal         func_41A008
    ctx->pc = 0x113FB8u;
    SET_GPR_U32(ctx, 31, 0x113FC0u);
    ctx->pc = 0x113FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FB8u;
    // 0x113fbc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A008u, 0x113FB8u, 0x113FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FC0u;
label_113fc0:
    // 0x113fc0: 0x8e03aa84  lw          $v1, -0x557C($s0)
    ctx->pc = 0x113fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x113fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113fc8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x113fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113fcc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x113fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113fd0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x113fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113fd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x113fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113fd8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x113fd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113fe0: 0xac6200cc  sw          $v0, 0xCC($v1)
    ctx->pc = 0x113fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 2));
    // 0x113fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x113FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FE4u;
        // 0x113fe8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113FECu;
    // 0x113fec: 0x0  nop
    ctx->pc = 0x113fecu;
    // NOP
    ctx->pc = 0x113ff0u;
}
