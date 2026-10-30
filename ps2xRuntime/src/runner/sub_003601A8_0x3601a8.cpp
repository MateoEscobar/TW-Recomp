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

// Function: sub_003601A8
// Address: 0x3601a8 - 0x3602e0
void sub_003601A8_0x3601a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003601A8_0x3601a8");
#endif

    switch (ctx->pc) {
        case 0x3601e4u: goto label_3601e4;
        case 0x3601ecu: goto label_3601ec;
        case 0x360200u: goto label_360200;
        case 0x360208u: goto label_360208;
        case 0x36021cu: goto label_36021c;
        case 0x360224u: goto label_360224;
        case 0x360238u: goto label_360238;
        case 0x360240u: goto label_360240;
        case 0x360254u: goto label_360254;
        case 0x36025cu: goto label_36025c;
        case 0x360270u: goto label_360270;
        case 0x360278u: goto label_360278;
        case 0x36028cu: goto label_36028c;
        case 0x3602acu: goto label_3602ac;
        default: break;
    }

    ctx->pc = 0x3601a8u;

    // 0x3601a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3601a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3601ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3601acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3601b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3601b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3601b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3601b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3601b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3601b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3601bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3601bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3601c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3601c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3601c4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3601c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3601c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3601c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3601cc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3601ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3601d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3601d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3601d4: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3601d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3601d8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3601d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3601dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3601DCu;
    SET_GPR_U32(ctx, 31, 0x3601E4u);
    ctx->pc = 0x3601E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3601DCu;
    // 0x3601e0: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3601DCu, 0x3601E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601E4u;
label_3601e4:
    // 0x3601e4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3601E4u;
    SET_GPR_U32(ctx, 31, 0x3601ECu);
    ctx->pc = 0x3601E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3601E4u;
    // 0x3601e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3601E4u, 0x3601ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601ECu;
label_3601ec:
    // 0x3601ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3601ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3601f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3601f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3601f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3601f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3601f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3601F8u;
    SET_GPR_U32(ctx, 31, 0x360200u);
    ctx->pc = 0x3601FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3601F8u;
    // 0x3601fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3601F8u, 0x360200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360200u;
label_360200:
    // 0x360200: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360200u;
    SET_GPR_U32(ctx, 31, 0x360208u);
    ctx->pc = 0x360204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360200u;
    // 0x360204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360200u, 0x360208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360208u;
label_360208:
    // 0x360208: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x360208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36020c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36020cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360210: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x360210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360214: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360214u;
    SET_GPR_U32(ctx, 31, 0x36021Cu);
    ctx->pc = 0x360218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360214u;
    // 0x360218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360214u, 0x36021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36021Cu;
label_36021c:
    // 0x36021c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36021Cu;
    SET_GPR_U32(ctx, 31, 0x360224u);
    ctx->pc = 0x360220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36021Cu;
    // 0x360220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36021Cu, 0x360224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360224u;
label_360224:
    // 0x360224: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x360224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360228: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x360228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36022c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x360230: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360230u;
    SET_GPR_U32(ctx, 31, 0x360238u);
    ctx->pc = 0x360234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360230u;
    // 0x360234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360230u, 0x360238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360238u;
label_360238:
    // 0x360238: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360238u;
    SET_GPR_U32(ctx, 31, 0x360240u);
    ctx->pc = 0x36023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360238u;
    // 0x36023c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360238u, 0x360240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360240u;
label_360240:
    // 0x360240: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x360240u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x360244: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x360244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360248: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x360248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36024c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36024Cu;
    SET_GPR_U32(ctx, 31, 0x360254u);
    ctx->pc = 0x360250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36024Cu;
    // 0x360250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36024Cu, 0x360254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360254u;
label_360254:
    // 0x360254: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360254u;
    SET_GPR_U32(ctx, 31, 0x36025Cu);
    ctx->pc = 0x360258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360254u;
    // 0x360258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360254u, 0x36025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36025Cu;
label_36025c:
    // 0x36025c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36025cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x360260: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x360260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360264: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x360264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x360268: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360268u;
    SET_GPR_U32(ctx, 31, 0x360270u);
    ctx->pc = 0x36026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360268u;
    // 0x36026c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360268u, 0x360270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360270u;
label_360270:
    // 0x360270: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360270u;
    SET_GPR_U32(ctx, 31, 0x360278u);
    ctx->pc = 0x360274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360270u;
    // 0x360274: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360270u, 0x360278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360278u;
label_360278:
    // 0x360278: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360278u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36027c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360280: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x360280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x360284: 0xc1024c6  jal         func_409318
    ctx->pc = 0x360284u;
    SET_GPR_U32(ctx, 31, 0x36028Cu);
    ctx->pc = 0x360288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360284u;
    // 0x360288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x360284u, 0x36028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36028Cu;
label_36028c:
    // 0x36028c: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x36028cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360290: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x360290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360294: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x360294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360298: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x360298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36029c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x36029cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3602a0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3602a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3602a4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x3602A4u;
    SET_GPR_U32(ctx, 31, 0x3602ACu);
    ctx->pc = 0x3602A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3602A4u;
    // 0x3602a8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x3602A4u, 0x3602ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3602ACu;
label_3602ac:
    // 0x3602ac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3602acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3602b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3602b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3602b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3602b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3602b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3602b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3602bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3602bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3602c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3602c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3602c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3602c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3602c8: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x3602c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3602cc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x3602ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3602d0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3602d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3602d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3602D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3602D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3602D4u;
        // 0x3602d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3602D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3602DCu;
    // 0x3602dc: 0x0  nop
    ctx->pc = 0x3602dcu;
    // NOP
    ctx->pc = 0x3602e0u;
}
