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

// Function: sub_0018B648
// Address: 0x18b648 - 0x18b7d0
void sub_0018B648_0x18b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B648_0x18b648");
#endif

    switch (ctx->pc) {
        case 0x18b6e0u: goto label_18b6e0;
        default: break;
    }

    ctx->pc = 0x18b648u;

    // 0x18b648: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18b64c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18b650: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18b654: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18b654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18b658: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18b658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b65c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18b65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18b660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18b660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b664: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b668: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18b668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b66c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x18b66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x18b670: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18b670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b674: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x18b674u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x18b678: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x18b678u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b67c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x18b67cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18b680: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x18b680u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x18b684: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x18b684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x18b688: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x18b688u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x18b68c: 0x16620015  bne         $s3, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18B68Cu;
    {
        const bool branch_taken_0x18b68c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x18B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B68Cu;
        // 0x18b690: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b68c) {
            ctx->pc = 0x18B6E4u;
            goto label_18b6e4;
        }
    }
    ctx->pc = 0x18B694u;
    // 0x18b694: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B694u;
    {
        const bool branch_taken_0x18b694 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x18B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B694u;
        // 0x18b698: 0x26340098  addiu       $s4, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b694) {
            ctx->pc = 0x18B6B0u;
            goto label_18b6b0;
        }
    }
    ctx->pc = 0x18B69Cu;
    // 0x18b69c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x18b69cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b6a0: 0x0  nop
    ctx->pc = 0x18b6a0u;
    // NOP
    // 0x18b6a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18b6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18b6a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18B6A8u;
    {
        const bool branch_taken_0x18b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6a8) {
            ctx->pc = 0x18B6CCu;
            goto label_18b6cc;
        }
    }
    ctx->pc = 0x18B6B0u;
label_18b6b0:
    // 0x18b6b0: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x18b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x18b6b4: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x18b6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x18b6b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18b6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18b6bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b6c0: 0x0  nop
    ctx->pc = 0x18b6c0u;
    // NOP
    // 0x18b6c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18b6c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18b6c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18b6c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18b6cc:
    // 0x18b6cc: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x18b6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x18b6d0: 0x3421c290  ori         $at, $at, 0xC290
    ctx->pc = 0x18b6d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49808);
    // 0x18b6d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18b6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18b6d8: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x18B6D8u;
    SET_GPR_U32(ctx, 31, 0x18B6E0u);
    ctx->pc = 0x18B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B6D8u;
    // 0x18b6dc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x18B6D8u, 0x18B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B6E0u;
label_18b6e0:
    // 0x18b6e0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x18b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_18b6e4:
    // 0x18b6e4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x18b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18b6e8: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x18b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18b6ec: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x18b6ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18b6f0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B6F0u;
    {
        const bool branch_taken_0x18b6f0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x18B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6F0u;
        // 0x18b6f4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6f0) {
            ctx->pc = 0x18B70Cu;
            goto label_18b70c;
        }
    }
    ctx->pc = 0x18B6F8u;
    // 0x18b6f8: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x18b6f8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b6fc: 0x0  nop
    ctx->pc = 0x18b6fcu;
    // NOP
    // 0x18b700: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b704: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18B704u;
    {
        const bool branch_taken_0x18b704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b704) {
            ctx->pc = 0x18B728u;
            goto label_18b728;
        }
    }
    ctx->pc = 0x18B70Cu;
label_18b70c:
    // 0x18b70c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x18b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x18b710: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x18b710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x18b714: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18b714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18b718: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b71c: 0x0  nop
    ctx->pc = 0x18b71cu;
    // NOP
    // 0x18b720: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b724: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18b724u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18b728:
    // 0x18b728: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18b728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18b72c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18b72cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18b730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b734: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x18b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18b738: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x18b738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18b73c: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x18b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x18b740: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18b740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18b744: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x18b744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b748: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B748u;
    {
        const bool branch_taken_0x18b748 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x18B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B748u;
        // 0x18b74c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b748) {
            ctx->pc = 0x18B764u;
            goto label_18b764;
        }
    }
    ctx->pc = 0x18B750u;
    // 0x18b750: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x18b750u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b754: 0x0  nop
    ctx->pc = 0x18b754u;
    // NOP
    // 0x18b758: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b75c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18B75Cu;
    {
        const bool branch_taken_0x18b75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b75c) {
            ctx->pc = 0x18B780u;
            goto label_18b780;
        }
    }
    ctx->pc = 0x18B764u;
label_18b764:
    // 0x18b764: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x18b764u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x18b768: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x18b768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x18b76c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18b76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18b770: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b774: 0x0  nop
    ctx->pc = 0x18b774u;
    // NOP
    // 0x18b778: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b77c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18b77cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18b780:
    // 0x18b780: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18b780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18b784: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18b784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18b788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b78c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18b78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b790: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18b790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18b794: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18b794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b798: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b79c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x18b79cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b7a0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x18b7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x18b7a4: 0xe6340150  swc1        $f20, 0x150($s1)
    ctx->pc = 0x18b7a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x18b7a8: 0xae350148  sw          $s5, 0x148($s1)
    ctx->pc = 0x18b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 21));
    // 0x18b7ac: 0xe635014c  swc1        $f21, 0x14C($s1)
    ctx->pc = 0x18b7acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 332), bits); }
    // 0x18b7b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18b7b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b7b4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x18b7b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b7b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b7bc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x18b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18b7c0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x18b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18b7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x18B7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7C4u;
        // 0x18b7c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B7CCu;
    // 0x18b7cc: 0x0  nop
    ctx->pc = 0x18b7ccu;
    // NOP
    ctx->pc = 0x18b7d0u;
}
