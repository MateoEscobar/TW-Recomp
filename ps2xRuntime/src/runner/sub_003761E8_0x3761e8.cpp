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

// Function: sub_003761E8
// Address: 0x3761e8 - 0x3762f0
void sub_003761E8_0x3761e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003761E8_0x3761e8");
#endif

    switch (ctx->pc) {
        case 0x37621cu: goto label_37621c;
        case 0x376224u: goto label_376224;
        case 0x376238u: goto label_376238;
        case 0x376240u: goto label_376240;
        case 0x376258u: goto label_376258;
        case 0x376260u: goto label_376260;
        case 0x376278u: goto label_376278;
        case 0x376280u: goto label_376280;
        case 0x376294u: goto label_376294;
        case 0x3762a8u: goto label_3762a8;
        case 0x3762c4u: goto label_3762c4;
        default: break;
    }

    ctx->pc = 0x3761e8u;

    // 0x3761e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3761e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3761ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3761ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3761f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3761f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3761f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3761f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3761f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3761f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3761fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3761fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x376200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x376204: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x376204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x376208: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37620c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37620cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376210: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x376210u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x376214: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376214u;
    SET_GPR_U32(ctx, 31, 0x37621Cu);
    ctx->pc = 0x376218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376214u;
    // 0x376218: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376214u, 0x37621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37621Cu;
label_37621c:
    // 0x37621c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37621Cu;
    SET_GPR_U32(ctx, 31, 0x376224u);
    ctx->pc = 0x376220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37621Cu;
    // 0x376220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37621Cu, 0x376224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376224u;
label_376224:
    // 0x376224: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x376224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376228: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x376228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37622c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376230: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376230u;
    SET_GPR_U32(ctx, 31, 0x376238u);
    ctx->pc = 0x376234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376230u;
    // 0x376234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376230u, 0x376238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376238u;
label_376238:
    // 0x376238: 0xc10b108  jal         func_42C420
    ctx->pc = 0x376238u;
    SET_GPR_U32(ctx, 31, 0x376240u);
    ctx->pc = 0x37623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376238u;
    // 0x37623c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x376238u, 0x376240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376240u;
label_376240:
    // 0x376240: 0x34068020  ori         $a2, $zero, 0x8020
    ctx->pc = 0x376240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x376244: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x376244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x376248: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x376248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37624c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x376250: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376250u;
    SET_GPR_U32(ctx, 31, 0x376258u);
    ctx->pc = 0x376254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376250u;
    // 0x376254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376250u, 0x376258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376258u;
label_376258:
    // 0x376258: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x376258u;
    SET_GPR_U32(ctx, 31, 0x376260u);
    ctx->pc = 0x37625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376258u;
    // 0x37625c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x376258u, 0x376260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376260u;
label_376260:
    // 0x376260: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x376260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x376264: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x376264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x376268: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x376268u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x37626c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376270: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376270u;
    SET_GPR_U32(ctx, 31, 0x376278u);
    ctx->pc = 0x376274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376270u;
    // 0x376274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376270u, 0x376278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376278u;
label_376278:
    // 0x376278: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x376278u;
    SET_GPR_U32(ctx, 31, 0x376280u);
    ctx->pc = 0x37627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376278u;
    // 0x37627c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x376278u, 0x376280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376280u;
label_376280:
    // 0x376280: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x376280u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x376284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376288: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x376288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37628c: 0xc102488  jal         func_409220
    ctx->pc = 0x37628Cu;
    SET_GPR_U32(ctx, 31, 0x376294u);
    ctx->pc = 0x376290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37628Cu;
    // 0x376290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37628Cu, 0x376294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376294u;
label_376294:
    // 0x376294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x376294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37629c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37629cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3762a0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3762A0u;
    SET_GPR_U32(ctx, 31, 0x3762A8u);
    ctx->pc = 0x3762A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3762A0u;
    // 0x3762a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3762A0u, 0x3762A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3762A8u;
label_3762a8:
    // 0x3762a8: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x3762a8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3762ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3762acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3762b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3762b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3762b4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3762b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3762b8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3762b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3762bc: 0xc0c5b28  jal         func_316CA0
    ctx->pc = 0x3762BCu;
    SET_GPR_U32(ctx, 31, 0x3762C4u);
    ctx->pc = 0x3762C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3762BCu;
    // 0x3762c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316CA0u, 0x3762BCu, 0x3762C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3762C4u;
label_3762c4:
    // 0x3762c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3762c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3762c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3762c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3762cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3762ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3762d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3762d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3762d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3762d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3762d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3762d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3762dc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x3762dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3762e0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3762e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3762e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3762E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3762E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762E4u;
        // 0x3762e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3762E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3762ECu;
    // 0x3762ec: 0x0  nop
    ctx->pc = 0x3762ecu;
    // NOP
    ctx->pc = 0x3762f0u;
}
