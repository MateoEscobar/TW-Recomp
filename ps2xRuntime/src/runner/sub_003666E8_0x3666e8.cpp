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

// Function: sub_003666E8
// Address: 0x3666e8 - 0x3667a0
void sub_003666E8_0x3666e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003666E8_0x3666e8");
#endif

    switch (ctx->pc) {
        case 0x366714u: goto label_366714;
        case 0x36671cu: goto label_36671c;
        case 0x366730u: goto label_366730;
        case 0x366738u: goto label_366738;
        case 0x36674cu: goto label_36674c;
        case 0x366764u: goto label_366764;
        case 0x36676cu: goto label_36676c;
        case 0x366780u: goto label_366780;
        default: break;
    }

    ctx->pc = 0x3666e8u;

    // 0x3666e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3666e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3666ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3666ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3666f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3666f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3666f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3666f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3666f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3666f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3666fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3666fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x366704: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x366704u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x366708: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x366708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36670c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36670Cu;
    SET_GPR_U32(ctx, 31, 0x366714u);
    ctx->pc = 0x366710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36670Cu;
    // 0x366710: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36670Cu, 0x366714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366714u;
label_366714:
    // 0x366714: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366714u;
    SET_GPR_U32(ctx, 31, 0x36671Cu);
    ctx->pc = 0x366718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366714u;
    // 0x366718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366714u, 0x36671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36671Cu;
label_36671c:
    // 0x36671c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36671cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x366720: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x366720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366724: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x366724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366728: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366728u;
    SET_GPR_U32(ctx, 31, 0x366730u);
    ctx->pc = 0x36672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366728u;
    // 0x36672c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366728u, 0x366730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366730u;
label_366730:
    // 0x366730: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366730u;
    SET_GPR_U32(ctx, 31, 0x366738u);
    ctx->pc = 0x366734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366730u;
    // 0x366734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366730u, 0x366738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366738u;
label_366738:
    // 0x366738: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x366738u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36673c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36673cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366740: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x366740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x366744: 0xc1024c6  jal         func_409318
    ctx->pc = 0x366744u;
    SET_GPR_U32(ctx, 31, 0x36674Cu);
    ctx->pc = 0x366748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366744u;
    // 0x366748: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x366744u, 0x36674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36674Cu;
label_36674c:
    // 0x36674c: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x36674cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x366750: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x366750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x366754: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x366754u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x366758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36675c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36675Cu;
    SET_GPR_U32(ctx, 31, 0x366764u);
    ctx->pc = 0x366760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36675Cu;
    // 0x366760: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36675Cu, 0x366764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366764u;
label_366764:
    // 0x366764: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x366764u;
    SET_GPR_U32(ctx, 31, 0x36676Cu);
    ctx->pc = 0x366768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366764u;
    // 0x366768: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x366764u, 0x36676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36676Cu;
label_36676c:
    // 0x36676c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36676cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366770: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x366770u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x366774: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x366774u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x366778: 0xc0473dc  jal         func_11CF70
    ctx->pc = 0x366778u;
    SET_GPR_U32(ctx, 31, 0x366780u);
    ctx->pc = 0x36677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366778u;
    // 0x36677c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CF70u, 0x366778u, 0x366780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366780u;
label_366780:
    // 0x366780: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x366780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x366788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36678c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36678cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366790: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x366790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x366794: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x366794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366798: 0x3e00008  jr          $ra
    ctx->pc = 0x366798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366798u;
        // 0x36679c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3667A0u;
}
