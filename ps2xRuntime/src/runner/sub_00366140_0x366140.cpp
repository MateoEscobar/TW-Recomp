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

// Function: sub_00366140
// Address: 0x366140 - 0x366360
void sub_00366140_0x366140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366140_0x366140");
#endif

    switch (ctx->pc) {
        case 0x366180u: goto label_366180;
        case 0x366194u: goto label_366194;
        case 0x36619cu: goto label_36619c;
        case 0x3661b0u: goto label_3661b0;
        case 0x3661b8u: goto label_3661b8;
        case 0x3661ccu: goto label_3661cc;
        case 0x3661d4u: goto label_3661d4;
        case 0x3661e8u: goto label_3661e8;
        case 0x3661f0u: goto label_3661f0;
        case 0x366200u: goto label_366200;
        case 0x366218u: goto label_366218;
        case 0x366220u: goto label_366220;
        case 0x366238u: goto label_366238;
        case 0x366250u: goto label_366250;
        case 0x366258u: goto label_366258;
        case 0x366288u: goto label_366288;
        case 0x366294u: goto label_366294;
        case 0x3662acu: goto label_3662ac;
        case 0x3662b8u: goto label_3662b8;
        case 0x3662c0u: goto label_3662c0;
        case 0x3662d0u: goto label_3662d0;
        case 0x3662e4u: goto label_3662e4;
        case 0x3662f8u: goto label_3662f8;
        case 0x366308u: goto label_366308;
        case 0x36631cu: goto label_36631c;
        default: break;
    }

    ctx->pc = 0x366140u;

    // 0x366140: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x366140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x366144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366148: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x366148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x36614c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36614cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366150: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x366150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366154: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x366154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x366158: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x366158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x36615c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x36615cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x366160: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x366160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x366164: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x366164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x366168: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x366168u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x36616c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x36616cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x366170: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x366170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x366174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x366174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x366178: 0xc102488  jal         func_409220
    ctx->pc = 0x366178u;
    SET_GPR_U32(ctx, 31, 0x366180u);
    ctx->pc = 0x36617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366178u;
    // 0x36617c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x366178u, 0x366180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366180u;
label_366180:
    // 0x366180: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366184: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x366184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36618c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36618Cu;
    SET_GPR_U32(ctx, 31, 0x366194u);
    ctx->pc = 0x366190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36618Cu;
    // 0x366190: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36618Cu, 0x366194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366194u;
label_366194:
    // 0x366194: 0xc10b108  jal         func_42C420
    ctx->pc = 0x366194u;
    SET_GPR_U32(ctx, 31, 0x36619Cu);
    ctx->pc = 0x366198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366194u;
    // 0x366198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x366194u, 0x36619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36619Cu;
label_36619c:
    // 0x36619c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36619cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3661a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3661a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3661a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3661a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3661a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3661A8u;
    SET_GPR_U32(ctx, 31, 0x3661B0u);
    ctx->pc = 0x3661ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661A8u;
    // 0x3661ac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3661A8u, 0x3661B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661B0u;
label_3661b0:
    // 0x3661b0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3661B0u;
    SET_GPR_U32(ctx, 31, 0x3661B8u);
    ctx->pc = 0x3661B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661B0u;
    // 0x3661b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3661B0u, 0x3661B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661B8u;
label_3661b8:
    // 0x3661b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3661b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3661bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3661bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3661c0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3661c0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x3661c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3661C4u;
    SET_GPR_U32(ctx, 31, 0x3661CCu);
    ctx->pc = 0x3661C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661C4u;
    // 0x3661c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3661C4u, 0x3661CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661CCu;
label_3661cc:
    // 0x3661cc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3661CCu;
    SET_GPR_U32(ctx, 31, 0x3661D4u);
    ctx->pc = 0x3661D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661CCu;
    // 0x3661d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3661CCu, 0x3661D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661D4u;
label_3661d4:
    // 0x3661d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3661d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3661d8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3661d8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3661dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3661dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3661e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3661E0u;
    SET_GPR_U32(ctx, 31, 0x3661E8u);
    ctx->pc = 0x3661E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661E0u;
    // 0x3661e4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3661E0u, 0x3661E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661E8u;
label_3661e8:
    // 0x3661e8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3661E8u;
    SET_GPR_U32(ctx, 31, 0x3661F0u);
    ctx->pc = 0x3661ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661E8u;
    // 0x3661ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3661E8u, 0x3661F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661F0u;
label_3661f0:
    // 0x3661f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3661f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3661f4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3661f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3661f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3661f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3661fc: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3661fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_366200:
    // 0x366200: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366208: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x366208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36620c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36620cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366210: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x366210u;
    SET_GPR_U32(ctx, 31, 0x366218u);
    ctx->pc = 0x366214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366210u;
    // 0x366214: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x366210u, 0x366218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366218u;
label_366218:
    // 0x366218: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366218u;
    SET_GPR_U32(ctx, 31, 0x366220u);
    ctx->pc = 0x36621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366218u;
    // 0x36621c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366218u, 0x366220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366220u;
label_366220:
    // 0x366220: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x366220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x366224: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x366224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366228: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366228u;
    {
        const bool branch_taken_0x366228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366228u;
        // 0x36622c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366228) {
            ctx->pc = 0x366200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366200;
        }
    }
    ctx->pc = 0x366230u;
    // 0x366230: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x366230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366234: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x366234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_366238:
    // 0x366238: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x366238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36623c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36623cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366240: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x366240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x366244: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366248: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x366248u;
    SET_GPR_U32(ctx, 31, 0x366250u);
    ctx->pc = 0x36624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366248u;
    // 0x36624c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x366248u, 0x366250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366250u;
label_366250:
    // 0x366250: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x366250u;
    SET_GPR_U32(ctx, 31, 0x366258u);
    ctx->pc = 0x366254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366250u;
    // 0x366254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x366250u, 0x366258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366258u;
label_366258:
    // 0x366258: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x366258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36625c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36625cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366260: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366260u;
    {
        const bool branch_taken_0x366260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366260u;
        // 0x366264: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366260) {
            ctx->pc = 0x366238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366238;
        }
    }
    ctx->pc = 0x366268u;
    // 0x366268: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x366268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36626c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36626cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366270: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x366270u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x366274: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x366274u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x366278: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x366278u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36627c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36627cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366280: 0xc0471ae  jal         func_11C6B8
    ctx->pc = 0x366280u;
    SET_GPR_U32(ctx, 31, 0x366288u);
    ctx->pc = 0x366284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366280u;
    // 0x366284: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C6B8u, 0x366280u, 0x366288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366288u;
label_366288:
    // 0x366288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x366288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36628c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36628Cu;
    SET_GPR_U32(ctx, 31, 0x366294u);
    ctx->pc = 0x366290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36628Cu;
    // 0x366290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36628Cu, 0x366294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366294u;
label_366294:
    // 0x366294: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x366294u;
    {
        const bool branch_taken_0x366294 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x366298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366294u;
        // 0x366298: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366294) {
            ctx->pc = 0x3662B0u;
            goto label_3662b0;
        }
    }
    ctx->pc = 0x36629Cu;
    // 0x36629c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36629cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3662a0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3662a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3662a4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3662A4u;
    SET_GPR_U32(ctx, 31, 0x3662ACu);
    ctx->pc = 0x3662A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662A4u;
    // 0x3662a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3662A4u, 0x3662ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662ACu;
label_3662ac:
    // 0x3662ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3662acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3662b0:
    // 0x3662b0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x3662B0u;
    SET_GPR_U32(ctx, 31, 0x3662B8u);
    ctx->pc = 0x3662B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662B0u;
    // 0x3662b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x3662B0u, 0x3662B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662B8u;
label_3662b8:
    // 0x3662b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3662b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3662bc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3662bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3662c0:
    // 0x3662c0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3662c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3662c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3662c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3662c8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3662C8u;
    SET_GPR_U32(ctx, 31, 0x3662D0u);
    ctx->pc = 0x3662CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662C8u;
    // 0x3662cc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3662C8u, 0x3662D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662D0u;
label_3662d0:
    // 0x3662d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3662d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3662d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3662d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3662d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3662d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3662dc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3662DCu;
    SET_GPR_U32(ctx, 31, 0x3662E4u);
    ctx->pc = 0x3662E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662DCu;
    // 0x3662e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3662DCu, 0x3662E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662E4u;
label_3662e4:
    // 0x3662e4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3662e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3662e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3662E8u;
    {
        const bool branch_taken_0x3662e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3662ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662E8u;
        // 0x3662ec: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3662e8) {
            ctx->pc = 0x3662C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3662c0;
        }
    }
    ctx->pc = 0x3662F0u;
    // 0x3662f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3662f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3662f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3662f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3662f8:
    // 0x3662f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3662f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3662fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3662fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x366300: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x366300u;
    SET_GPR_U32(ctx, 31, 0x366308u);
    ctx->pc = 0x366304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366300u;
    // 0x366304: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x366300u, 0x366308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366308u;
label_366308:
    // 0x366308: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x366308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36630c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366310: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x366310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x366314: 0xc102576  jal         func_4095D8
    ctx->pc = 0x366314u;
    SET_GPR_U32(ctx, 31, 0x36631Cu);
    ctx->pc = 0x366318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366314u;
    // 0x366318: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x366314u, 0x36631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36631Cu;
label_36631c:
    // 0x36631c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36631cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x366320: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x366320u;
    {
        const bool branch_taken_0x366320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366320u;
        // 0x366324: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366320) {
            ctx->pc = 0x3662F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3662f8;
        }
    }
    ctx->pc = 0x366328u;
    // 0x366328: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x366328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36632c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366330: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x366330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x366334: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x366334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x366338: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x366338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36633c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36633cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x366340: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x366340u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x366344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366348: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x366348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36634c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x36634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x366350: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x366350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366354: 0x3e00008  jr          $ra
    ctx->pc = 0x366354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366354u;
        // 0x366358: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36635Cu;
    // 0x36635c: 0x0  nop
    ctx->pc = 0x36635cu;
    // NOP
    ctx->pc = 0x366360u;
}
