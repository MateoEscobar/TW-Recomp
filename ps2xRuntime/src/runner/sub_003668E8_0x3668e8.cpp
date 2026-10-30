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

// Function: sub_003668E8
// Address: 0x3668e8 - 0x3669b0
void sub_003668E8_0x3668e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003668E8_0x3668e8");
#endif

    switch (ctx->pc) {
        case 0x366918u: goto label_366918;
        case 0x366920u: goto label_366920;
        case 0x366934u: goto label_366934;
        case 0x36693cu: goto label_36693c;
        case 0x366950u: goto label_366950;
        case 0x366958u: goto label_366958;
        case 0x366970u: goto label_366970;
        case 0x366978u: goto label_366978;
        case 0x36698cu: goto label_36698c;
        default: break;
    }

    ctx->pc = 0x3668e8u;

    // 0x3668e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3668e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3668ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3668ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3668f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3668f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3668f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3668f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3668f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3668f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3668fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366900: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x366900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x366904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x366908: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36690c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x36690cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x366910: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366910u;
    SET_GPR_U32(ctx, 31, 0x366918u);
    ctx->pc = 0x366914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366910u;
    // 0x366914: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366910u, 0x366918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366918u;
label_366918:
    // 0x366918: 0xc10b108  jal         func_42C420
    ctx->pc = 0x366918u;
    SET_GPR_U32(ctx, 31, 0x366920u);
    ctx->pc = 0x36691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366918u;
    // 0x36691c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x366918u, 0x366920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366920u;
label_366920:
    // 0x366920: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366924: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x366924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366928: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x366928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36692c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36692Cu;
    SET_GPR_U32(ctx, 31, 0x366934u);
    ctx->pc = 0x366930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36692Cu;
    // 0x366930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36692Cu, 0x366934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366934u;
label_366934:
    // 0x366934: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366934u;
    SET_GPR_U32(ctx, 31, 0x36693Cu);
    ctx->pc = 0x366938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366934u;
    // 0x366938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366934u, 0x36693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36693Cu;
label_36693c:
    // 0x36693c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36693cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x366940: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366944: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x366944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x366948: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366948u;
    SET_GPR_U32(ctx, 31, 0x366950u);
    ctx->pc = 0x36694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366948u;
    // 0x36694c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366948u, 0x366950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366950u;
label_366950:
    // 0x366950: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366950u;
    SET_GPR_U32(ctx, 31, 0x366958u);
    ctx->pc = 0x366954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366950u;
    // 0x366954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366950u, 0x366958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366958u;
label_366958:
    // 0x366958: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x366958u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x36695c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x36695cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x366960: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x366960u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x366964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x366964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366968: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366968u;
    SET_GPR_U32(ctx, 31, 0x366970u);
    ctx->pc = 0x36696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366968u;
    // 0x36696c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366968u, 0x366970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366970u;
label_366970:
    // 0x366970: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x366970u;
    SET_GPR_U32(ctx, 31, 0x366978u);
    ctx->pc = 0x366974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366970u;
    // 0x366974: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x366970u, 0x366978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366978u;
label_366978:
    // 0x366978: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x366978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36697c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366980: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x366980u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x366984: 0xc04748a  jal         func_11D228
    ctx->pc = 0x366984u;
    SET_GPR_U32(ctx, 31, 0x36698Cu);
    ctx->pc = 0x366988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366984u;
    // 0x366988: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D228u, 0x366984u, 0x36698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36698Cu;
label_36698c:
    // 0x36698c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36698cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366990: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366994: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x366994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366998: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x366998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36699c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36699cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3669a0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x3669a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3669a4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3669a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3669a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3669A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3669ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3669A8u;
        // 0x3669ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3669A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3669B0u;
}
