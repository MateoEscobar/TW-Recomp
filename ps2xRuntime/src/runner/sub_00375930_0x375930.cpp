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

// Function: sub_00375930
// Address: 0x375930 - 0x375a20
void sub_00375930_0x375930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375930_0x375930");
#endif

    switch (ctx->pc) {
        case 0x375960u: goto label_375960;
        case 0x375968u: goto label_375968;
        case 0x37597cu: goto label_37597c;
        case 0x375984u: goto label_375984;
        case 0x3759a4u: goto label_3759a4;
        case 0x3759acu: goto label_3759ac;
        case 0x3759c0u: goto label_3759c0;
        case 0x3759d8u: goto label_3759d8;
        case 0x3759e0u: goto label_3759e0;
        case 0x3759f8u: goto label_3759f8;
        default: break;
    }

    ctx->pc = 0x375930u;

    // 0x375930: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x375930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x375934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x375934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375938: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x375938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37593c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37593cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x375940: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x375940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x375944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375948: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x375948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x37594c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x37594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x375950: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x375950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x375954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375958: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375958u;
    SET_GPR_U32(ctx, 31, 0x375960u);
    ctx->pc = 0x37595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375958u;
    // 0x37595c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375958u, 0x375960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375960u;
label_375960:
    // 0x375960: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375960u;
    SET_GPR_U32(ctx, 31, 0x375968u);
    ctx->pc = 0x375964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375960u;
    // 0x375964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375960u, 0x375968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375968u;
label_375968:
    // 0x375968: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x375968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37596c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x37596cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375970: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375974: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375974u;
    SET_GPR_U32(ctx, 31, 0x37597Cu);
    ctx->pc = 0x375978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375974u;
    // 0x375978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375974u, 0x37597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37597Cu;
label_37597c:
    // 0x37597c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37597Cu;
    SET_GPR_U32(ctx, 31, 0x375984u);
    ctx->pc = 0x375980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37597Cu;
    // 0x375980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37597Cu, 0x375984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375984u;
label_375984:
    // 0x375984: 0x3406811e  ori         $a2, $zero, 0x811E
    ctx->pc = 0x375984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33054);
    // 0x375988: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x375988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x37598c: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x37598cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x375990: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x375990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x375994: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x375994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375998: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37599c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37599Cu;
    SET_GPR_U32(ctx, 31, 0x3759A4u);
    ctx->pc = 0x3759A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37599Cu;
    // 0x3759a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37599Cu, 0x3759A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3759A4u;
label_3759a4:
    // 0x3759a4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3759A4u;
    SET_GPR_U32(ctx, 31, 0x3759ACu);
    ctx->pc = 0x3759A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3759A4u;
    // 0x3759a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3759A4u, 0x3759ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3759ACu;
label_3759ac:
    // 0x3759ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3759acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3759b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3759b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3759b8: 0xc102488  jal         func_409220
    ctx->pc = 0x3759B8u;
    SET_GPR_U32(ctx, 31, 0x3759C0u);
    ctx->pc = 0x3759BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3759B8u;
    // 0x3759bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3759B8u, 0x3759C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3759C0u;
label_3759c0:
    // 0x3759c0: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x3759c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x3759c4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3759c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3759c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3759c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3759ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759d0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3759D0u;
    SET_GPR_U32(ctx, 31, 0x3759D8u);
    ctx->pc = 0x3759D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3759D0u;
    // 0x3759d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3759D0u, 0x3759D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3759D8u;
label_3759d8:
    // 0x3759d8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3759D8u;
    SET_GPR_U32(ctx, 31, 0x3759E0u);
    ctx->pc = 0x3759DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3759D8u;
    // 0x3759dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3759D8u, 0x3759E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3759E0u;
label_3759e0:
    // 0x3759e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3759e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3759e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3759e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3759ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759f0: 0xc0c598e  jal         func_316638
    ctx->pc = 0x3759F0u;
    SET_GPR_U32(ctx, 31, 0x3759F8u);
    ctx->pc = 0x3759F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3759F0u;
    // 0x3759f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x316638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316638u, 0x3759F0u, 0x3759F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3759F8u;
label_3759f8:
    // 0x3759f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3759f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3759fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3759fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a00: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x375a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375a04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x375a04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375a08: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x375a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375a0c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x375a0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375a14: 0x3e00008  jr          $ra
    ctx->pc = 0x375A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A14u;
        // 0x375a18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375A1Cu;
    // 0x375a1c: 0x0  nop
    ctx->pc = 0x375a1cu;
    // NOP
    ctx->pc = 0x375a20u;
}
