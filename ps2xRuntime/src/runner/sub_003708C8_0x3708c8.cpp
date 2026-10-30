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

// Function: sub_003708C8
// Address: 0x3708c8 - 0x370980
void sub_003708C8_0x3708c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003708C8_0x3708c8");
#endif

    switch (ctx->pc) {
        case 0x3708f4u: goto label_3708f4;
        case 0x3708fcu: goto label_3708fc;
        case 0x370910u: goto label_370910;
        case 0x370918u: goto label_370918;
        case 0x370930u: goto label_370930;
        case 0x370938u: goto label_370938;
        case 0x37094cu: goto label_37094c;
        case 0x370960u: goto label_370960;
        default: break;
    }

    ctx->pc = 0x3708c8u;

    // 0x3708c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3708c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3708cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3708ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3708d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3708d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3708d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3708d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3708d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3708d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3708dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3708dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3708e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3708e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3708e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3708e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3708e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3708e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3708ec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3708ECu;
    SET_GPR_U32(ctx, 31, 0x3708F4u);
    ctx->pc = 0x3708F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3708ECu;
    // 0x3708f0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3708ECu, 0x3708F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3708F4u;
label_3708f4:
    // 0x3708f4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3708F4u;
    SET_GPR_U32(ctx, 31, 0x3708FCu);
    ctx->pc = 0x3708F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3708F4u;
    // 0x3708f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3708F4u, 0x3708FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3708FCu;
label_3708fc:
    // 0x3708fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3708fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370900: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x370900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370904: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x370904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370908: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370908u;
    SET_GPR_U32(ctx, 31, 0x370910u);
    ctx->pc = 0x37090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370908u;
    // 0x37090c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370908u, 0x370910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370910u;
label_370910:
    // 0x370910: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370910u;
    SET_GPR_U32(ctx, 31, 0x370918u);
    ctx->pc = 0x370914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370910u;
    // 0x370914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370910u, 0x370918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370918u;
label_370918:
    // 0x370918: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x370918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37091c: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37091cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x370920: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x370920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370924: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x370924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370928: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370928u;
    SET_GPR_U32(ctx, 31, 0x370930u);
    ctx->pc = 0x37092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370928u;
    // 0x37092c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370928u, 0x370930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370930u;
label_370930:
    // 0x370930: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x370930u;
    SET_GPR_U32(ctx, 31, 0x370938u);
    ctx->pc = 0x370934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370930u;
    // 0x370934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x370930u, 0x370938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370938u;
label_370938:
    // 0x370938: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x370938u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37093c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37093cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370940: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x370940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x370944: 0xc1024c6  jal         func_409318
    ctx->pc = 0x370944u;
    SET_GPR_U32(ctx, 31, 0x37094Cu);
    ctx->pc = 0x370948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370944u;
    // 0x370948: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x370944u, 0x37094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37094Cu;
label_37094c:
    // 0x37094c: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x37094cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x370950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x370950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x370954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370958: 0xc06d00e  jal         func_1B4038
    ctx->pc = 0x370958u;
    SET_GPR_U32(ctx, 31, 0x370960u);
    ctx->pc = 0x37095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370958u;
    // 0x37095c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4038u, 0x370958u, 0x370960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370960u;
label_370960:
    // 0x370960: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x370960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370968: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x370968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37096c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37096cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370974: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x370974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x370978: 0x3e00008  jr          $ra
    ctx->pc = 0x370978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370978u;
        // 0x37097c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370980u;
}
