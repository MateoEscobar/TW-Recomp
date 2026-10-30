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

// Function: sub_00497C58
// Address: 0x497c58 - 0x497d30
void sub_00497C58_0x497c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497C58_0x497c58");
#endif

    switch (ctx->pc) {
        case 0x497d04u: goto label_497d04;
        case 0x497d0cu: goto label_497d0c;
        case 0x497d14u: goto label_497d14;
        default: break;
    }

    ctx->pc = 0x497c58u;

    // 0x497c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x497c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x497c5c: 0x8f828a48  lw          $v0, -0x75B8($gp)
    ctx->pc = 0x497c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937160)));
    // 0x497c60: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x497C60u;
    {
        const bool branch_taken_0x497c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497C60u;
        // 0x497c64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497c60) {
            ctx->pc = 0x497D1Cu;
            goto label_497d1c;
        }
    }
    ctx->pc = 0x497C68u;
    // 0x497c68: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x497c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x497c6c: 0x3c0d0071  lui         $t5, 0x71
    ctx->pc = 0x497c6cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)113 << 16));
    // 0x497c70: 0xdc65f670  ld          $a1, -0x990($v1)
    ctx->pc = 0x497c70u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x70F670u));
    // 0x497c74: 0x2462f670  addiu       $v0, $v1, -0x990
    ctx->pc = 0x497c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964848));
    // 0x497c78: 0xdc440170  ld          $a0, 0x170($v0)
    ctx->pc = 0x497c78u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x70F7E0u));
    // 0x497c7c: 0x3c0c0071  lui         $t4, 0x71
    ctx->pc = 0x497c7cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)113 << 16));
    // 0x497c80: 0xdc43ffb0  ld          $v1, -0x50($v0)
    ctx->pc = 0x497c80u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x70F620u));
    // 0x497c84: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x497c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x497c88: 0xdc46ffd8  ld          $a2, -0x28($v0)
    ctx->pc = 0x497c88u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x70F648u));
    // 0x497c8c: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x497c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x497c90: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x497c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x497c94: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x497c94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x497c98: 0x25a20088  addiu       $v0, $t5, 0x88
    ctx->pc = 0x497c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 136));
    // 0x497c9c: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x497c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x497ca0: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x497ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x497ca4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x497ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x497ca8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x497ca8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x497cac: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x497cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x497cb0: 0x3c0a0071  lui         $t2, 0x71
    ctx->pc = 0x497cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)113 << 16));
    // 0x497cb4: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x497cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x497cb8: 0x25870098  addiu       $a3, $t4, 0x98
    ctx->pc = 0x497cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 152));
    // 0x497cbc: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x497cbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x497cc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x497cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x497cc4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x497cc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x497cc8: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x497cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x497ccc: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x497cccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
    // 0x497cd0: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x497cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x497cd4: 0x254800a8  addiu       $t0, $t2, 0xA8
    ctx->pc = 0x497cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 168));
    // 0x497cd8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x497cd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x497cdc: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x497cdcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x497ce0: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x497ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x497ce4: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x497ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x497ce8: 0x256900b8  addiu       $t1, $t3, 0xB8
    ctx->pc = 0x497ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 184));
    // 0x497cec: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x497cecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x497cf0: 0xada00088  sw          $zero, 0x88($t5)
    ctx->pc = 0x497cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 136), GPR_U32(ctx, 0));
    // 0x497cf4: 0xad800098  sw          $zero, 0x98($t4)
    ctx->pc = 0x497cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 152), GPR_U32(ctx, 0));
    // 0x497cf8: 0xad4000a8  sw          $zero, 0xA8($t2)
    ctx->pc = 0x497cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 168), GPR_U32(ctx, 0));
    // 0x497cfc: 0xc125e20  jal         func_497880
    ctx->pc = 0x497CFCu;
    SET_GPR_U32(ctx, 31, 0x497D04u);
    ctx->pc = 0x497D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497CFCu;
    // 0x497d00: 0xad6000b8  sw          $zero, 0xB8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x497880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497880u, 0x497CFCu, 0x497D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497D04u;
label_497d04:
    // 0x497d04: 0xc125e98  jal         func_497A60
    ctx->pc = 0x497D04u;
    SET_GPR_U32(ctx, 31, 0x497D0Cu);
    ctx->pc = 0x497D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497D04u;
    // 0x497d08: 0xaf82872c  sw          $v0, -0x78D4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936364), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x497A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497A60u, 0x497D04u, 0x497D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497D0Cu;
label_497d0c:
    // 0x497d0c: 0xc125dd4  jal         func_497750
    ctx->pc = 0x497D0Cu;
    SET_GPR_U32(ctx, 31, 0x497D14u);
    ctx->pc = 0x497D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497D0Cu;
    // 0x497d10: 0xaf828728  sw          $v0, -0x78D8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x497750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497750u, 0x497D0Cu, 0x497D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497D14u;
label_497d14:
    // 0x497d14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x497D14u;
    {
        const bool branch_taken_0x497d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D14u;
        // 0x497d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497d14) {
            ctx->pc = 0x497D20u;
            goto label_497d20;
        }
    }
    ctx->pc = 0x497D1Cu;
label_497d1c:
    // 0x497d1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x497d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497d20:
    // 0x497d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x497d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497d24: 0x3e00008  jr          $ra
    ctx->pc = 0x497D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D24u;
        // 0x497d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497D2Cu;
    // 0x497d2c: 0x0  nop
    ctx->pc = 0x497d2cu;
    // NOP
    ctx->pc = 0x497d30u;
}
