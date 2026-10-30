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

// Function: sub_004D7130
// Address: 0x4d7130 - 0x4d7240
void sub_004D7130_0x4d7130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7130_0x4d7130");
#endif

    switch (ctx->pc) {
        case 0x4d7194u: goto label_4d7194;
        case 0x4d71d0u: goto label_4d71d0;
        case 0x4d71ecu: goto label_4d71ec;
        case 0x4d71fcu: goto label_4d71fc;
        default: break;
    }

    ctx->pc = 0x4d7130u;

    // 0x4d7130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d7130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4d7134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d7134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d7138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d7138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d713c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d713cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7140: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d7140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d7144: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4d7144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7148: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d7148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d714c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x4d714cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d7150: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d7150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d7154: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x4d7154u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4d7158: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x4d7158u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4d715c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x4d715cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4d7160: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4D7160u;
    {
        const bool branch_taken_0x4d7160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7160u;
        // 0x4d7164: 0xacb00004  sw          $s0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7160) {
            ctx->pc = 0x4D7214u;
            goto label_4d7214;
        }
    }
    ctx->pc = 0x4D7168u;
    // 0x4d7168: 0x109843  sra         $s3, $s0, 1
    ctx->pc = 0x4d7168u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 16), 1));
    // 0x4d716c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x4d716cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x4d7170: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4d7170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4d7174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4d7174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d7178: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x4d7178u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d717c: 0x0  nop
    ctx->pc = 0x4d717cu;
    // NOP
    // 0x4d7180: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x4d7180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4d7184: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4d7184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d7188: 0x460c0583  div.s       $f22, $f0, $f12
    ctx->pc = 0x4d7188u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x4d718c: 0xc1339fe  jal         func_4CE7F8
    ctx->pc = 0x4D718Cu;
    SET_GPR_U32(ctx, 31, 0x4D7194u);
    ctx->pc = 0x4D7190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D718Cu;
    // 0x4d7190: 0x460cb302  mul.s       $f12, $f22, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE7F8u, 0x4D718Cu, 0x4D7194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7194u;
label_4d7194:
    // 0x4d7194: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4d7194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4d7198: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4d7198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4d719c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x4d719cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x4d71a0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x4d71a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x4d71a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4d71a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4d71a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4d71ac: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x4d71acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4d71b0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x4D71B0u;
    {
        const bool branch_taken_0x4d71b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D71B0u;
        // 0x4d71b4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d71b0) {
            ctx->pc = 0x4D7214u;
            goto label_4d7214;
        }
    }
    ctx->pc = 0x4D71B8u;
    // 0x4d71b8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4d71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d71bc: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x4d71bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
    // 0x4d71c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d71c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4d71c4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4d71c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4d71c8: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x4d71c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x4d71cc: 0x0  nop
    ctx->pc = 0x4d71ccu;
    // NOP
label_4d71d0:
    // 0x4d71d0: 0x4492a000  mtc1        $s2, $f20
    ctx->pc = 0x4d71d0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4d71d4: 0x0  nop
    ctx->pc = 0x4d71d4u;
    // NOP
    // 0x4d71d8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x4d71d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x4d71dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d71dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4d71e0: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x4d71e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x4d71e4: 0xc1339fe  jal         func_4CE7F8
    ctx->pc = 0x4D71E4u;
    SET_GPR_U32(ctx, 31, 0x4D71ECu);
    ctx->pc = 0x4D71E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D71E4u;
    // 0x4d71e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE7F8u, 0x4D71E4u, 0x4D71ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D71ECu;
label_4d71ec:
    // 0x4d71ec: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4d71ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x4d71f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4d71f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4d71f4: 0xc133942  jal         func_4CE508
    ctx->pc = 0x4D71F4u;
    SET_GPR_U32(ctx, 31, 0x4D71FCu);
    ctx->pc = 0x4D71F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D71F4u;
    // 0x4d71f8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE508u, 0x4D71F4u, 0x4D71FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D71FCu;
label_4d71fc:
    // 0x4d71fc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4d71fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4d7200: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4d7200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x4d7204: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x4d7204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4d7208: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x4d7208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4d720c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4D720Cu;
    {
        const bool branch_taken_0x4d720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D720Cu;
        // 0x4d7210: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d720c) {
            ctx->pc = 0x4D71D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d71d0;
        }
    }
    ctx->pc = 0x4D7214u;
label_4d7214:
    // 0x4d7214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d7218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d721c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d721cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7220: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d7220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d7224: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d7224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d7228: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x4d7228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4d722c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x4d722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d7230: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x4d7230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d7234: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7234u;
        // 0x4d7238: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D723Cu;
    // 0x4d723c: 0x0  nop
    ctx->pc = 0x4d723cu;
    // NOP
    ctx->pc = 0x4d7240u;
}
