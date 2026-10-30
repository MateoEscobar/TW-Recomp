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

// Function: sub_002B96A8
// Address: 0x2b96a8 - 0x2b9720
void sub_002B96A8_0x2b96a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B96A8_0x2b96a8");
#endif

    switch (ctx->pc) {
        case 0x2b96c8u: goto label_2b96c8;
        case 0x2b970cu: goto label_2b970c;
        default: break;
    }

    ctx->pc = 0x2b96a8u;

    // 0x2b96a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b96a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b96ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b96acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b96b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b96b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b96b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b96b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b96b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b96b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b96bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b96bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b96c0: 0xc0a22c6  jal         func_288B18
    ctx->pc = 0x2B96C0u;
    SET_GPR_U32(ctx, 31, 0x2B96C8u);
    ctx->pc = 0x2B96C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B96C0u;
    // 0x2b96c4: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2B96C0u, 0x2B96C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B96C8u;
label_2b96c8:
    // 0x2b96c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b96cc: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x2b96ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2b96d0: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2b96d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
    // 0x2b96d4: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2b96d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
    // 0x2b96d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b96d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b96dc: 0x0  nop
    ctx->pc = 0x2b96dcu;
    // NOP
    // 0x2b96e0: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2b96e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x2b96e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b96e8: 0xac400208  sw          $zero, 0x208($v0)
    ctx->pc = 0x2b96e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
    // 0x2b96ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b96f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b96f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b96f4: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2b96f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2b96f8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2b96f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2b96fc: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2b96fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x2b9700: 0x82050020  lb          $a1, 0x20($s0)
    ctx->pc = 0x2b9700u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b9704: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2B9704u;
    SET_GPR_U32(ctx, 31, 0x2B970Cu);
    ctx->pc = 0x2B9708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9704u;
    // 0x2b9708: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2B9704u, 0x2B970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B970Cu;
label_2b970c:
    // 0x2b970c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b970cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9714: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9714u;
        // 0x2b9718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B971Cu;
    // 0x2b971c: 0x0  nop
    ctx->pc = 0x2b971cu;
    // NOP
    ctx->pc = 0x2b9720u;
}
