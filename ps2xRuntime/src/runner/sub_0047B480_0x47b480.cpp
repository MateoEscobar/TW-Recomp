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

// Function: sub_0047B480
// Address: 0x47b480 - 0x47b560
void sub_0047B480_0x47b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B480_0x47b480");
#endif

    switch (ctx->pc) {
        case 0x47b4bcu: goto label_47b4bc;
        case 0x47b4dcu: goto label_47b4dc;
        case 0x47b4fcu: goto label_47b4fc;
        case 0x47b510u: goto label_47b510;
        case 0x47b524u: goto label_47b524;
        default: break;
    }

    ctx->pc = 0x47b480u;

    // 0x47b480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47b484: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x47b484u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x47b488: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x47b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x47b48c: 0x2508b790  addiu       $t0, $t0, -0x4870
    ctx->pc = 0x47b48cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948752));
    // 0x47b490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47b490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47b494: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x47b494u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x47b498: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x47b498u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x47b49c: 0x2610b740  addiu       $s0, $s0, -0x48C0
    ctx->pc = 0x47b49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948672));
    // 0x47b4a0: 0x2631b750  addiu       $s1, $s1, -0x48B0
    ctx->pc = 0x47b4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948688));
    // 0x47b4a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b4a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x47b4a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b4ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x47b4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b4b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x47b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47b4b4: 0xc11b046  jal         func_46C118
    ctx->pc = 0x47B4B4u;
    SET_GPR_U32(ctx, 31, 0x47B4BCu);
    ctx->pc = 0x47B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B4B4u;
    // 0x47b4b8: 0x2405050f  addiu       $a1, $zero, 0x50F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C118u, 0x47B4B4u, 0x47B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B4BCu;
label_47b4bc:
    // 0x47b4bc: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x47b4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x47b4c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x47b4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b4c4: 0x2508b818  addiu       $t0, $t0, -0x47E8
    ctx->pc = 0x47b4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948888));
    // 0x47b4c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x47b4c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b4cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x47b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47b4d0: 0x2405050f  addiu       $a1, $zero, 0x50F
    ctx->pc = 0x47b4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x47b4d4: 0xc11a9d2  jal         func_46A748
    ctx->pc = 0x47B4D4u;
    SET_GPR_U32(ctx, 31, 0x47B4DCu);
    ctx->pc = 0x47B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B4D4u;
    // 0x47b4d8: 0xaf828910  sw          $v0, -0x76F0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936848), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A748u, 0x47B4D4u, 0x47B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B4DCu;
label_47b4dc:
    // 0x47b4dc: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x47b4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x47b4e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x47b4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b4e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x47b4e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b4e8: 0x2508b8b0  addiu       $t0, $t0, -0x4750
    ctx->pc = 0x47b4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949040));
    // 0x47b4ec: 0x2405050f  addiu       $a1, $zero, 0x50F
    ctx->pc = 0x47b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x47b4f0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x47b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47b4f4: 0xc11c222  jal         func_470888
    ctx->pc = 0x47B4F4u;
    SET_GPR_U32(ctx, 31, 0x47B4FCu);
    ctx->pc = 0x47B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B4F4u;
    // 0x47b4f8: 0xaf828914  sw          $v0, -0x76EC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470888u, 0x47B4F4u, 0x47B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B4FCu;
label_47b4fc:
    // 0x47b4fc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47b4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x47b500: 0x2404050f  addiu       $a0, $zero, 0x50F
    ctx->pc = 0x47b500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    // 0x47b504: 0x24a5b938  addiu       $a1, $a1, -0x46C8
    ctx->pc = 0x47b504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949176));
    // 0x47b508: 0xc11aa04  jal         func_46A810
    ctx->pc = 0x47B508u;
    SET_GPR_U32(ctx, 31, 0x47B510u);
    ctx->pc = 0x47B50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B508u;
    // 0x47b50c: 0xaf828918  sw          $v0, -0x76E8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936856), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A810u, 0x47B508u, 0x47B510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B510u;
label_47b510:
    // 0x47b510: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47b510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x47b514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47b514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b518: 0x24a5ba08  addiu       $a1, $a1, -0x45F8
    ctx->pc = 0x47b518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949384));
    // 0x47b51c: 0xc11c242  jal         func_470908
    ctx->pc = 0x47B51Cu;
    SET_GPR_U32(ctx, 31, 0x47B524u);
    ctx->pc = 0x47B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B51Cu;
    // 0x47b520: 0x2404050f  addiu       $a0, $zero, 0x50F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470908u, 0x47B51Cu, 0x47B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B524u;
label_47b524:
    // 0x47b524: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x47b524u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x47b528: 0x8f838910  lw          $v1, -0x76F0($gp)
    ctx->pc = 0x47b528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x47b52c: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x47b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x47b530: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x47b530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x47b534: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47b534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47b538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47b538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b53c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x47b53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x47b540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b544: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x47b544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x47b548: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x47b548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x47b54c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x47b54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47b550: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x47b550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x47b554: 0x3e00008  jr          $ra
    ctx->pc = 0x47B554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B554u;
        // 0x47b558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B55Cu;
    // 0x47b55c: 0x0  nop
    ctx->pc = 0x47b55cu;
    // NOP
    ctx->pc = 0x47b560u;
}
