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

// Function: sub_00254078
// Address: 0x254078 - 0x2541c8
void sub_00254078_0x254078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254078_0x254078");
#endif

    switch (ctx->pc) {
        case 0x2540a4u: goto label_2540a4;
        case 0x2540b8u: goto label_2540b8;
        case 0x2540d4u: goto label_2540d4;
        case 0x2540e8u: goto label_2540e8;
        case 0x254104u: goto label_254104;
        case 0x254118u: goto label_254118;
        case 0x254134u: goto label_254134;
        case 0x254148u: goto label_254148;
        case 0x254164u: goto label_254164;
        case 0x254178u: goto label_254178;
        case 0x254194u: goto label_254194;
        case 0x2541a8u: goto label_2541a8;
        default: break;
    }

    ctx->pc = 0x254078u;

    // 0x254078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25407c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x254080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254088: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x254088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25408c: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x25408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x254090: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x254090u;
    {
        const bool branch_taken_0x254090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254090) {
            ctx->pc = 0x254094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254090u;
            // 0x254094: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2541B8u;
            goto label_2541b8;
        }
    }
    ctx->pc = 0x254098u;
    // 0x254098: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x254098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25409c: 0xc040654  jal         func_101950
    ctx->pc = 0x25409Cu;
    SET_GPR_U32(ctx, 31, 0x2540A4u);
    ctx->pc = 0x2540A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25409Cu;
    // 0x2540a0: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101950u, 0x25409Cu, 0x2540A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2540A4u;
label_2540a4:
    // 0x2540a4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2540a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2540a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2540a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2540ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2540acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540b0: 0xc040680  jal         func_101A00
    ctx->pc = 0x2540B0u;
    SET_GPR_U32(ctx, 31, 0x2540B8u);
    ctx->pc = 0x2540B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540B0u;
    // 0x2540b4: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2540B0u, 0x2540B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2540B8u;
label_2540b8:
    // 0x2540b8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2540b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x2540bc: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2540bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2540c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2540c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540c4: 0xe4740164  swc1        $f20, 0x164($v1)
    ctx->pc = 0x2540c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 356), bits); }
    // 0x2540c8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2540c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2540cc: 0xc040654  jal         func_101950
    ctx->pc = 0x2540CCu;
    SET_GPR_U32(ctx, 31, 0x2540D4u);
    ctx->pc = 0x2540D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540CCu;
    // 0x2540d0: 0x8c450034  lw          $a1, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101950u, 0x2540CCu, 0x2540D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2540D4u;
label_2540d4:
    // 0x2540d4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2540d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2540d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2540d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2540dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2540dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540e0: 0xc040680  jal         func_101A00
    ctx->pc = 0x2540E0u;
    SET_GPR_U32(ctx, 31, 0x2540E8u);
    ctx->pc = 0x2540E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540E0u;
    // 0x2540e4: 0x8c450034  lw          $a1, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2540E0u, 0x2540E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2540E8u;
label_2540e8:
    // 0x2540e8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2540e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x2540ec: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2540ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2540f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2540f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540f4: 0xe474016c  swc1        $f20, 0x16C($v1)
    ctx->pc = 0x2540f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 364), bits); }
    // 0x2540f8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2540f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2540fc: 0xc040654  jal         func_101950
    ctx->pc = 0x2540FCu;
    SET_GPR_U32(ctx, 31, 0x254104u);
    ctx->pc = 0x254100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540FCu;
    // 0x254100: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101950u, 0x2540FCu, 0x254104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254104u;
label_254104:
    // 0x254104: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x254104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x254108: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x254108u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25410c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254110: 0xc040680  jal         func_101A00
    ctx->pc = 0x254110u;
    SET_GPR_U32(ctx, 31, 0x254118u);
    ctx->pc = 0x254114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254110u;
    // 0x254114: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x254110u, 0x254118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254118u;
label_254118:
    // 0x254118: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x254118u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x25411c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x25411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x254120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254124: 0xe4740170  swc1        $f20, 0x170($v1)
    ctx->pc = 0x254124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 368), bits); }
    // 0x254128: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x254128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25412c: 0xc040654  jal         func_101950
    ctx->pc = 0x25412Cu;
    SET_GPR_U32(ctx, 31, 0x254134u);
    ctx->pc = 0x254130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25412Cu;
    // 0x254130: 0x8c45003c  lw          $a1, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101950u, 0x25412Cu, 0x254134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254134u;
label_254134:
    // 0x254134: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x254134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x254138: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x254138u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25413c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25413cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254140: 0xc040680  jal         func_101A00
    ctx->pc = 0x254140u;
    SET_GPR_U32(ctx, 31, 0x254148u);
    ctx->pc = 0x254144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254140u;
    // 0x254144: 0x8c45003c  lw          $a1, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x254140u, 0x254148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254148u;
label_254148:
    // 0x254148: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x254148u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x25414c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x25414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x254150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254154: 0xe4740174  swc1        $f20, 0x174($v1)
    ctx->pc = 0x254154u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 372), bits); }
    // 0x254158: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x254158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25415c: 0xc040654  jal         func_101950
    ctx->pc = 0x25415Cu;
    SET_GPR_U32(ctx, 31, 0x254164u);
    ctx->pc = 0x254160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25415Cu;
    // 0x254160: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101950u, 0x25415Cu, 0x254164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254164u;
label_254164:
    // 0x254164: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x254164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x254168: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x254168u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25416c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25416cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254170: 0xc040680  jal         func_101A00
    ctx->pc = 0x254170u;
    SET_GPR_U32(ctx, 31, 0x254178u);
    ctx->pc = 0x254174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254170u;
    // 0x254174: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x254170u, 0x254178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254178u;
label_254178:
    // 0x254178: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x254178u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x25417c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x25417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x254180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254184: 0xe4740178  swc1        $f20, 0x178($v1)
    ctx->pc = 0x254184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 376), bits); }
    // 0x254188: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x254188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25418c: 0xc040654  jal         func_101950
    ctx->pc = 0x25418Cu;
    SET_GPR_U32(ctx, 31, 0x254194u);
    ctx->pc = 0x254190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25418Cu;
    // 0x254190: 0x8c450044  lw          $a1, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101950u, 0x25418Cu, 0x254194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254194u;
label_254194:
    // 0x254194: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x254194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x254198: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x254198u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25419c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25419cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541a0: 0xc040680  jal         func_101A00
    ctx->pc = 0x2541A0u;
    SET_GPR_U32(ctx, 31, 0x2541A8u);
    ctx->pc = 0x2541A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2541A0u;
    // 0x2541a4: 0x8c450044  lw          $a1, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2541A0u, 0x2541A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2541A8u;
label_2541a8:
    // 0x2541a8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2541a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x2541ac: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2541acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2541b0: 0xe454017c  swc1        $f20, 0x17C($v0)
    ctx->pc = 0x2541b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 380), bits); }
    // 0x2541b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2541b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2541b8:
    // 0x2541b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2541b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2541bc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2541bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2541c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2541C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2541C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541C0u;
        // 0x2541c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2541C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2541C8u;
}
