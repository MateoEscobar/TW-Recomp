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

// Function: sub_00365AD8
// Address: 0x365ad8 - 0x365b80
void sub_00365AD8_0x365ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365AD8_0x365ad8");
#endif

    switch (ctx->pc) {
        case 0x365b04u: goto label_365b04;
        case 0x365b0cu: goto label_365b0c;
        case 0x365b20u: goto label_365b20;
        case 0x365b28u: goto label_365b28;
        case 0x365b3cu: goto label_365b3c;
        case 0x365b44u: goto label_365b44;
        case 0x365b54u: goto label_365b54;
        case 0x365b60u: goto label_365b60;
        default: break;
    }

    ctx->pc = 0x365ad8u;

    // 0x365ad8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x365ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x365adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365ae0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x365ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x365ae4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x365ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x365ae8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x365ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x365aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365af0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x365af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x365af4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x365af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x365af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365afc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365AFCu;
    SET_GPR_U32(ctx, 31, 0x365B04u);
    ctx->pc = 0x365B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365AFCu;
    // 0x365b00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365AFCu, 0x365B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B04u;
label_365b04:
    // 0x365b04: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365B04u;
    SET_GPR_U32(ctx, 31, 0x365B0Cu);
    ctx->pc = 0x365B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B04u;
    // 0x365b08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365B04u, 0x365B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B0Cu;
label_365b0c:
    // 0x365b0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b10: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x365b10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365b18: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365B18u;
    SET_GPR_U32(ctx, 31, 0x365B20u);
    ctx->pc = 0x365B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B18u;
    // 0x365b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365B18u, 0x365B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B20u;
label_365b20:
    // 0x365b20: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365B20u;
    SET_GPR_U32(ctx, 31, 0x365B28u);
    ctx->pc = 0x365B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B20u;
    // 0x365b24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365B20u, 0x365B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B28u;
label_365b28:
    // 0x365b28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x365b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x365b34: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365B34u;
    SET_GPR_U32(ctx, 31, 0x365B3Cu);
    ctx->pc = 0x365B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B34u;
    // 0x365b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365B34u, 0x365B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B3Cu;
label_365b3c:
    // 0x365b3c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365B3Cu;
    SET_GPR_U32(ctx, 31, 0x365B44u);
    ctx->pc = 0x365B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B3Cu;
    // 0x365b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365B3Cu, 0x365B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B44u;
label_365b44:
    // 0x365b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x365b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x365b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b4c: 0xc04709c  jal         func_11C270
    ctx->pc = 0x365B4Cu;
    SET_GPR_U32(ctx, 31, 0x365B54u);
    ctx->pc = 0x365B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B4Cu;
    // 0x365b50: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C270u, 0x365B4Cu, 0x365B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B54u;
label_365b54:
    // 0x365b54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x365b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b58: 0xc102562  jal         func_409588
    ctx->pc = 0x365B58u;
    SET_GPR_U32(ctx, 31, 0x365B60u);
    ctx->pc = 0x365B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B58u;
    // 0x365b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x365B58u, 0x365B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B60u;
label_365b60:
    // 0x365b60: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x365b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x365b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365b68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x365b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365b6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x365b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365b70: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x365b70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365b78: 0x3e00008  jr          $ra
    ctx->pc = 0x365B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B78u;
        // 0x365b7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365B80u;
}
