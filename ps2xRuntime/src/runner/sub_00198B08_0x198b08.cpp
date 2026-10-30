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

// Function: sub_00198B08
// Address: 0x198b08 - 0x198b60
void sub_00198B08_0x198b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198B08_0x198b08");
#endif

    switch (ctx->pc) {
        case 0x198b4cu: goto label_198b4c;
        default: break;
    }

    ctx->pc = 0x198b08u;

    // 0x198b08: 0x6402b  sltu        $t0, $zero, $a2
    ctx->pc = 0x198b08u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x198b0c: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x198b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x198b10: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x198b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x198b14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198b14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198b18: 0x53602  srl         $a2, $a1, 24
    ctx->pc = 0x198b18u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x198b1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x198b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x198b20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x198b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x198b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x198b28: 0xa3a60003  sb          $a2, 0x3($sp)
    ctx->pc = 0x198b28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x198b2c: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x198b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x198b30: 0x35060002  ori         $a2, $t0, 0x2
    ctx->pc = 0x198b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x198b34: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x198b34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x198b38: 0x107300a  movz        $a2, $t0, $a3
    ctx->pc = 0x198b38u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x198b3c: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x198b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x198b40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x198b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b44: 0xc1209fe  jal         func_4827F8
    ctx->pc = 0x198B44u;
    SET_GPR_U32(ctx, 31, 0x198B4Cu);
    ctx->pc = 0x198B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B44u;
    // 0x198b48: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4827F8u, 0x198B44u, 0x198B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B4Cu;
label_198b4c:
    // 0x198b4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x198b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198b50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x198b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x198b54: 0x3e00008  jr          $ra
    ctx->pc = 0x198B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B54u;
        // 0x198b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198B5Cu;
    // 0x198b5c: 0x0  nop
    ctx->pc = 0x198b5cu;
    // NOP
    ctx->pc = 0x198b60u;
}
