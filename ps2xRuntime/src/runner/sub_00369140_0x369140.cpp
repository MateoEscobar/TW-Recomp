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

// Function: sub_00369140
// Address: 0x369140 - 0x3692b0
void sub_00369140_0x369140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369140_0x369140");
#endif

    switch (ctx->pc) {
        case 0x369178u: goto label_369178;
        case 0x369180u: goto label_369180;
        case 0x369194u: goto label_369194;
        case 0x36919cu: goto label_36919c;
        case 0x3691b0u: goto label_3691b0;
        case 0x3691b8u: goto label_3691b8;
        case 0x3691ccu: goto label_3691cc;
        case 0x3691d4u: goto label_3691d4;
        case 0x3691e0u: goto label_3691e0;
        case 0x3691f8u: goto label_3691f8;
        case 0x369200u: goto label_369200;
        case 0x369228u: goto label_369228;
        case 0x369230u: goto label_369230;
        case 0x369244u: goto label_369244;
        case 0x36925cu: goto label_36925c;
        case 0x369270u: goto label_369270;
        default: break;
    }

    ctx->pc = 0x369140u;

    // 0x369140: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x369140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x369144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x369144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369148: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x369148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36914c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x369150: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x369150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369154: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x369154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369158: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x369158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36915c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36915cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x369160: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x369160u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x369164: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x369164u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x369168: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x369168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x36916c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x369170: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369170u;
    SET_GPR_U32(ctx, 31, 0x369178u);
    ctx->pc = 0x369174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369170u;
    // 0x369174: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369170u, 0x369178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369178u;
label_369178:
    // 0x369178: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369178u;
    SET_GPR_U32(ctx, 31, 0x369180u);
    ctx->pc = 0x36917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369178u;
    // 0x36917c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369178u, 0x369180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369180u;
label_369180:
    // 0x369180: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369184: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x369184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x369188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x369188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36918c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36918Cu;
    SET_GPR_U32(ctx, 31, 0x369194u);
    ctx->pc = 0x369190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36918Cu;
    // 0x369190: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36918Cu, 0x369194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369194u;
label_369194:
    // 0x369194: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x369194u;
    SET_GPR_U32(ctx, 31, 0x36919Cu);
    ctx->pc = 0x369198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369194u;
    // 0x369198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x369194u, 0x36919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36919Cu;
label_36919c:
    // 0x36919c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36919cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3691a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3691a4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3691a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x3691a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3691A8u;
    SET_GPR_U32(ctx, 31, 0x3691B0u);
    ctx->pc = 0x3691ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691A8u;
    // 0x3691ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3691A8u, 0x3691B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691B0u;
label_3691b0:
    // 0x3691b0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3691B0u;
    SET_GPR_U32(ctx, 31, 0x3691B8u);
    ctx->pc = 0x3691B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691B0u;
    // 0x3691b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3691B0u, 0x3691B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691B8u;
label_3691b8:
    // 0x3691b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3691b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691bc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3691bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3691c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3691c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3691C4u;
    SET_GPR_U32(ctx, 31, 0x3691CCu);
    ctx->pc = 0x3691C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691C4u;
    // 0x3691c8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3691C4u, 0x3691CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691CCu;
label_3691cc:
    // 0x3691cc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3691CCu;
    SET_GPR_U32(ctx, 31, 0x3691D4u);
    ctx->pc = 0x3691D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691CCu;
    // 0x3691d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3691CCu, 0x3691D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691D4u;
label_3691d4:
    // 0x3691d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3691d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3691d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3691d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691dc: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3691dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3691e0:
    // 0x3691e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3691e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3691e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3691e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3691e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3691ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3691ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691f0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3691F0u;
    SET_GPR_U32(ctx, 31, 0x3691F8u);
    ctx->pc = 0x3691F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691F0u;
    // 0x3691f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3691F0u, 0x3691F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691F8u;
label_3691f8:
    // 0x3691f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3691F8u;
    SET_GPR_U32(ctx, 31, 0x369200u);
    ctx->pc = 0x3691FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691F8u;
    // 0x3691fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3691F8u, 0x369200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369200u;
label_369200:
    // 0x369200: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x369200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x369204: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x369204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x369208: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x369208u;
    {
        const bool branch_taken_0x369208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369208u;
        // 0x36920c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369208) {
            ctx->pc = 0x3691E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3691e0;
        }
    }
    ctx->pc = 0x369210u;
    // 0x369210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x369210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369214: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x369214u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x369218: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x369218u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x36921c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36921cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x369220: 0xc063852  jal         func_18E148
    ctx->pc = 0x369220u;
    SET_GPR_U32(ctx, 31, 0x369228u);
    ctx->pc = 0x369224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369220u;
    // 0x369224: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E148u, 0x369220u, 0x369228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369228u;
label_369228:
    // 0x369228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x369228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36922c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x36922cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_369230:
    // 0x369230: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x369230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x369234: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x369234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x369238: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x369238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36923c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36923Cu;
    SET_GPR_U32(ctx, 31, 0x369244u);
    ctx->pc = 0x369240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36923Cu;
    // 0x369240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36923Cu, 0x369244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369244u;
label_369244:
    // 0x369244: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x369244u;
    {
        const bool branch_taken_0x369244 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x369248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369244u;
        // 0x369248: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369244) {
            ctx->pc = 0x369260u;
            goto label_369260;
        }
    }
    ctx->pc = 0x36924Cu;
    // 0x36924c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36924cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x369250: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x369250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x369254: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x369254u;
    SET_GPR_U32(ctx, 31, 0x36925Cu);
    ctx->pc = 0x369258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369254u;
    // 0x369258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x369254u, 0x36925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36925Cu;
label_36925c:
    // 0x36925c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36925cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_369260:
    // 0x369260: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x369260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369264: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x369264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369268: 0xc102576  jal         func_4095D8
    ctx->pc = 0x369268u;
    SET_GPR_U32(ctx, 31, 0x369270u);
    ctx->pc = 0x36926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369268u;
    // 0x36926c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x369268u, 0x369270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369270u;
label_369270:
    // 0x369270: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x369270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369274: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x369274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x369278: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x369278u;
    {
        const bool branch_taken_0x369278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369278u;
        // 0x36927c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369278) {
            ctx->pc = 0x369230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369230;
        }
    }
    ctx->pc = 0x369280u;
    // 0x369280: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x369280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x369284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x369284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369288: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x369288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36928c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36928cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369290: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x369290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x369294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369298: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x369298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36929c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x36929cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3692a0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3692a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3692a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3692A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3692A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3692A4u;
        // 0x3692a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3692A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3692ACu;
    // 0x3692ac: 0x0  nop
    ctx->pc = 0x3692acu;
    // NOP
    ctx->pc = 0x3692b0u;
}
