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

// Function: sub_0022DD08
// Address: 0x22dd08 - 0x22dd98
void sub_0022DD08_0x22dd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DD08_0x22dd08");
#endif

    switch (ctx->pc) {
        case 0x22dd1cu: goto label_22dd1c;
        default: break;
    }

    ctx->pc = 0x22dd08u;

    // 0x22dd08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22dd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22dd0c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x22dd0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22dd10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22dd14: 0xc088ad6  jal         func_222B58
    ctx->pc = 0x22DD14u;
    SET_GPR_U32(ctx, 31, 0x22DD1Cu);
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x22DD14u, 0x22DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD1Cu;
label_22dd1c:
    // 0x22dd1c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x22dd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x22dd20: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22dd20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22dd24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22dd24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22dd28: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x22dd28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x22dd2c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x22dd2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22dd30: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22DD30u;
    {
        const bool branch_taken_0x22dd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD30u;
        // 0x22dd34: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd30) {
            ctx->pc = 0x22DD88u;
            goto label_22dd88;
        }
    }
    ctx->pc = 0x22DD38u;
    // 0x22dd38: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x22dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22dd3c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DD3Cu;
    {
        const bool branch_taken_0x22dd3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD3Cu;
        // 0x22dd40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd3c) {
            ctx->pc = 0x22DD58u;
            goto label_22dd58;
        }
    }
    ctx->pc = 0x22DD44u;
    // 0x22dd44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22dd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22dd48: 0x0  nop
    ctx->pc = 0x22dd48u;
    // NOP
    // 0x22dd4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22dd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22dd50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22DD50u;
    {
        const bool branch_taken_0x22dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dd50) {
            ctx->pc = 0x22DD70u;
            goto label_22dd70;
        }
    }
    ctx->pc = 0x22DD58u;
label_22dd58:
    // 0x22dd58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22dd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22dd5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22dd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22dd60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22dd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22dd64: 0x0  nop
    ctx->pc = 0x22dd64u;
    // NOP
    // 0x22dd68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22dd68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22dd6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22dd6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22dd70:
    // 0x22dd70: 0x3c014196  lui         $at, 0x4196
    ctx->pc = 0x22dd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16790 << 16));
    // 0x22dd74: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x22dd74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x22dd78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22dd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dd7c: 0x0  nop
    ctx->pc = 0x22dd7cu;
    // NOP
    // 0x22dd80: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x22dd80u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22dd84: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x22dd84u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_22dd88:
    // 0x22dd88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22dd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dd8c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x22dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22dd90: 0x3e00008  jr          $ra
    ctx->pc = 0x22DD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD90u;
        // 0x22dd94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DD98u;
}
