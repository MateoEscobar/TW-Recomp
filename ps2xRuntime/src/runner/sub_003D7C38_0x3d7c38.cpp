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

// Function: sub_003D7C38
// Address: 0x3d7c38 - 0x3d7cc4
void sub_003D7C38_0x3d7c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7C38_0x3d7c38");
#endif

    switch (ctx->pc) {
        case 0x3d7c38u: goto label_3d7c38;
        case 0x3d7c3cu: goto label_3d7c3c;
        case 0x3d7c40u: goto label_3d7c40;
        case 0x3d7c44u: goto label_3d7c44;
        case 0x3d7c48u: goto label_3d7c48;
        case 0x3d7c4cu: goto label_3d7c4c;
        case 0x3d7c50u: goto label_3d7c50;
        case 0x3d7c54u: goto label_3d7c54;
        case 0x3d7c58u: goto label_3d7c58;
        case 0x3d7c5cu: goto label_3d7c5c;
        case 0x3d7c60u: goto label_3d7c60;
        case 0x3d7c64u: goto label_3d7c64;
        case 0x3d7c68u: goto label_3d7c68;
        case 0x3d7c6cu: goto label_3d7c6c;
        case 0x3d7c70u: goto label_3d7c70;
        case 0x3d7c74u: goto label_3d7c74;
        case 0x3d7c78u: goto label_3d7c78;
        case 0x3d7c7cu: goto label_3d7c7c;
        case 0x3d7c80u: goto label_3d7c80;
        case 0x3d7c84u: goto label_3d7c84;
        case 0x3d7c88u: goto label_3d7c88;
        case 0x3d7c8cu: goto label_3d7c8c;
        case 0x3d7c90u: goto label_3d7c90;
        case 0x3d7c94u: goto label_3d7c94;
        case 0x3d7c98u: goto label_3d7c98;
        case 0x3d7c9cu: goto label_3d7c9c;
        case 0x3d7ca0u: goto label_3d7ca0;
        case 0x3d7ca4u: goto label_3d7ca4;
        case 0x3d7ca8u: goto label_3d7ca8;
        case 0x3d7cacu: goto label_3d7cac;
        case 0x3d7cb0u: goto label_3d7cb0;
        case 0x3d7cb4u: goto label_3d7cb4;
        case 0x3d7cb8u: goto label_3d7cb8;
        case 0x3d7cbcu: goto label_3d7cbc;
        case 0x3d7cc0u: goto label_3d7cc0;
        default: break;
    }

    ctx->pc = 0x3d7c38u;

label_3d7c38:
    // 0x3d7c38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d7c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d7c3c:
    // 0x3d7c3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3d7c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3d7c40:
    // 0x3d7c40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d7c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d7c44:
    // 0x3d7c44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d7c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c48:
    // 0x3d7c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d7c4c:
    // 0x3d7c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d7c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c50:
    // 0x3d7c50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d7c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d7c54:
    // 0x3d7c54: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d7c54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d7c58:
    // 0x3d7c58: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d7c5c:
    // 0x3d7c5c: 0x40f809  jalr        $v0
label_3d7c60:
    if (ctx->pc == 0x3D7C60u) {
        ctx->pc = 0x3D7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C5Cu;
        // 0x3d7c60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C64u;
        goto label_3d7c64;
    }
    ctx->pc = 0x3D7C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7C64u);
        ctx->pc = 0x3D7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C5Cu;
        // 0x3d7c60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7C5Cu, 0x3D7C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7C64u;
label_3d7c64:
    // 0x3d7c64: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x3d7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_3d7c68:
    // 0x3d7c68: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x3d7c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_3d7c6c:
    // 0x3d7c6c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3d7c70:
    if (ctx->pc == 0x3D7C70u) {
        ctx->pc = 0x3D7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C6Cu;
        // 0x3d7c70: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C74u;
        goto label_3d7c74;
    }
    ctx->pc = 0x3D7C6Cu;
    {
        const bool branch_taken_0x3d7c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C6Cu;
        // 0x3d7c70: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c6c) {
            ctx->pc = 0x3D7CC4u;
            return;
        }
    }
    ctx->pc = 0x3D7C74u;
label_3d7c74:
    // 0x3d7c74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d7c78:
    // 0x3d7c78: 0x24425070  addiu       $v0, $v0, 0x5070
    ctx->pc = 0x3d7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20592));
label_3d7c7c:
    // 0x3d7c7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d7c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d7c80:
    // 0x3d7c80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d7c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d7c84:
    // 0x3d7c84: 0x800008  jr          $a0
label_3d7c88:
    if (ctx->pc == 0x3D7C88u) {
        ctx->pc = 0x3D7C8Cu;
        goto label_3d7c8c;
    }
    ctx->pc = 0x3D7C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D7C8Cu: goto label_3d7c8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7C84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D7C8Cu;
label_3d7c8c:
    // 0x3d7c8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d7c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c90:
    // 0x3d7c90: 0xc0e90ca  jal         func_3A4328
label_3d7c94:
    if (ctx->pc == 0x3D7C94u) {
        ctx->pc = 0x3D7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C90u;
        // 0x3d7c94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C98u;
        goto label_3d7c98;
    }
    ctx->pc = 0x3D7C90u;
    SET_GPR_U32(ctx, 31, 0x3D7C98u);
    ctx->pc = 0x3D7C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7C90u;
    // 0x3d7c94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D7C90u, 0x3D7C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7C98u;
label_3d7c98:
    // 0x3d7c98: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3d7c98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7c9c:
    // 0x3d7c9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d7c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d7ca0:
    // 0x3d7ca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d7ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7ca4:
    // 0x3d7ca4: 0xc0e911e  jal         func_3A4478
label_3d7ca8:
    if (ctx->pc == 0x3D7CA8u) {
        ctx->pc = 0x3D7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CA4u;
        // 0x3d7ca8: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7CACu;
        goto label_3d7cac;
    }
    ctx->pc = 0x3D7CA4u;
    SET_GPR_U32(ctx, 31, 0x3D7CACu);
    ctx->pc = 0x3D7CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7CA4u;
    // 0x3d7ca8: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3D7CA4u, 0x3D7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7CACu;
label_3d7cac:
    // 0x3d7cac: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d7cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d7cb0:
    // 0x3d7cb0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3d7cb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7cb4:
    // 0x3d7cb4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3d7cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3d7cb8:
    // 0x3d7cb8: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x3d7cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
label_3d7cbc:
    // 0x3d7cbc: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3d7cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3d7cc0:
    // 0x3d7cc0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x3d7cc4u;
}
