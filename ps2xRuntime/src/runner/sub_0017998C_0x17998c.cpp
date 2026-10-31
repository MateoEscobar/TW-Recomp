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

// Function: sub_0017998C
// Address: 0x17998c - 0x179c30
void sub_0017998C_0x17998c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017998C_0x17998c");
#endif

    switch (ctx->pc) {
        case 0x1799bcu: goto label_1799bc;
        case 0x1799f0u: goto label_1799f0;
        case 0x179a78u: goto label_179a78;
        case 0x179aecu: goto label_179aec;
        case 0x179afcu: goto label_179afc;
        case 0x179b08u: goto label_179b08;
        case 0x179b10u: goto label_179b10;
        case 0x179b60u: goto label_179b60;
        case 0x179b68u: goto label_179b68;
        default: break;
    }

    ctx->pc = 0x17998cu;

    // 0x17998c: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x17998cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    // 0x179990: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x179990u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179994: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x179994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x179998: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x179998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x17999c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x17999cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1799a0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1799a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1799a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1799a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1799a8: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x1799a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1799ac: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x1799acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1799b0: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x1799b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1799b4: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x1799B4u;
    SET_GPR_U32(ctx, 31, 0x1799BCu);
    ctx->pc = 0x1799B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1799B4u;
    // 0x1799b8: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1799B4u, 0x1799BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1799BCu;
label_1799bc:
    // 0x1799bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1799bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799c0: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x1799c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x1799c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1799C4u;
    {
        const bool branch_taken_0x1799c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1799c4) {
            ctx->pc = 0x1799D8u;
            goto label_1799d8;
        }
    }
    ctx->pc = 0x1799CCu;
    // 0x1799cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1799ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1799d0: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1799D0u;
    {
        const bool branch_taken_0x1799d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1799D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799D0u;
        // 0x1799d4: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799d0) {
            ctx->pc = 0x179BECu;
            goto label_179bec;
        }
    }
    ctx->pc = 0x1799D8u;
label_1799d8:
    // 0x1799d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1799d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1799dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1799dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1799e0: 0x56c20006  bnel        $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1799E0u;
    {
        const bool branch_taken_0x1799e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1799e0) {
            ctx->pc = 0x1799E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1799E0u;
            // 0x1799e4: 0xafb60084  sw          $s6, 0x84($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1799FCu;
            goto label_1799fc;
        }
    }
    ctx->pc = 0x1799E8u;
    // 0x1799e8: 0xc060b58  jal         func_182D60
    ctx->pc = 0x1799E8u;
    SET_GPR_U32(ctx, 31, 0x1799F0u);
    ctx->pc = 0x1799ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1799E8u;
    // 0x1799ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1799E8u, 0x1799F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1799F0u;
label_1799f0:
    // 0x1799f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1799f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1799f4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1799f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1799f8: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x1799f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
label_1799fc:
    // 0x1799fc: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1799fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179a00: 0x321e0004  andi        $fp, $s0, 0x4
    ctx->pc = 0x179a00u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x179a04: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x179a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179a08: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x179a08u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x179a0c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x179a0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x179a10: 0x46000d80  add.s       $f22, $f1, $f0
    ctx->pc = 0x179a10u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x179a14: 0x17c00010  bnez        $fp, . + 4 + (0x10 << 2)
    ctx->pc = 0x179A14u;
    {
        const bool branch_taken_0x179a14 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x179A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A14u;
        // 0x179a18: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a14) {
            ctx->pc = 0x179A58u;
            goto label_179a58;
        }
    }
    ctx->pc = 0x179A1Cu;
    // 0x179a1c: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x179A1Cu;
    {
        const bool branch_taken_0x179a1c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x179A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A1Cu;
        // 0x179a20: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a1c) {
            ctx->pc = 0x179A38u;
            goto label_179a38;
        }
    }
    ctx->pc = 0x179A24u;
    // 0x179a24: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x179a24u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179a28: 0x0  nop
    ctx->pc = 0x179a28u;
    // NOP
    // 0x179a2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x179a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x179a30: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x179A30u;
    {
        const bool branch_taken_0x179a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A30u;
        // 0x179a34: 0x4600b002  mul.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a30) {
            ctx->pc = 0x179BE8u;
            goto label_179be8;
        }
    }
    ctx->pc = 0x179A38u;
label_179a38:
    // 0x179a38: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x179a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x179a3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179a44: 0x0  nop
    ctx->pc = 0x179a44u;
    // NOP
    // 0x179a48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x179a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x179a4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x179a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x179a50: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x179A50u;
    {
        const bool branch_taken_0x179a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A50u;
        // 0x179a54: 0x4600b002  mul.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a50) {
            ctx->pc = 0x179BE8u;
            goto label_179be8;
        }
    }
    ctx->pc = 0x179A58u;
label_179a58:
    // 0x179a58: 0x12600062  beqz        $s3, . + 4 + (0x62 << 2)
    ctx->pc = 0x179A58u;
    {
        const bool branch_taken_0x179a58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A58u;
        // 0x179a5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a58) {
            ctx->pc = 0x179BE4u;
            goto label_179be4;
        }
    }
    ctx->pc = 0x179A60u;
    // 0x179a60: 0x3ae20006  xori        $v0, $s7, 0x6
    ctx->pc = 0x179a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)6);
    // 0x179a64: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x179a64u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x179a68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x179a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x179a6c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x179a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x179a70: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x179a70u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x179a74: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x179a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_179a78:
    // 0x179a78: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x179a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179a7c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x179a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x179a80: 0x12d50008  beq         $s6, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x179A80u;
    {
        const bool branch_taken_0x179a80 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 21));
        ctx->pc = 0x179A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A80u;
        // 0x179a84: 0x90500000  lbu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a80) {
            ctx->pc = 0x179AA4u;
            goto label_179aa4;
        }
    }
    ctx->pc = 0x179A88u;
    // 0x179a88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x179a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x179a8c: 0x16e20003  bne         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179A8Cu;
    {
        const bool branch_taken_0x179a8c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x179A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A8Cu;
        // 0x179a90: 0x8fa30088  lw          $v1, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a8c) {
            ctx->pc = 0x179A9Cu;
            goto label_179a9c;
        }
    }
    ctx->pc = 0x179A94u;
    // 0x179a94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x179A94u;
    {
        const bool branch_taken_0x179a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A94u;
        // 0x179a98: 0x2610ffd0  addiu       $s0, $s0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a94) {
            ctx->pc = 0x179AA4u;
            goto label_179aa4;
        }
    }
    ctx->pc = 0x179A9Cu;
label_179a9c:
    // 0x179a9c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x179a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x179aa0: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x179aa0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_179aa4:
    // 0x179aa4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x179aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x179aa8: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179AA8u;
    {
        const bool branch_taken_0x179aa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x179AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AA8u;
        // 0x179aac: 0x240300ac  addiu       $v1, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179aa8) {
            ctx->pc = 0x179AB8u;
            goto label_179ab8;
        }
    }
    ctx->pc = 0x179AB0u;
    // 0x179ab0: 0x1603000c  bne         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x179AB0u;
    {
        const bool branch_taken_0x179ab0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x179ab0) {
            ctx->pc = 0x179AE4u;
            goto label_179ae4;
        }
    }
    ctx->pc = 0x179AB8u;
label_179ab8:
    // 0x179ab8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x179ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x179abc: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x179ABCu;
    {
        const bool branch_taken_0x179abc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ABCu;
        // 0x179ac0: 0xc442ccb4  lwc1        $f2, -0x334C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179abc) {
            ctx->pc = 0x179ADCu;
            goto label_179adc;
        }
    }
    ctx->pc = 0x179AC4u;
    // 0x179ac4: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x179ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x179ac8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x179ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x179acc: 0xc441ccac  lwc1        $f1, -0x3354($v0)
    ctx->pc = 0x179accu;
    { uint32_t bits = FAST_READ32(0x50CCACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179ad0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x179ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x179ad4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x179AD4u;
    {
        const bool branch_taken_0x179ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AD4u;
        // 0x179ad8: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ad4) {
            ctx->pc = 0x179BD4u;
            goto label_179bd4;
        }
    }
    ctx->pc = 0x179ADCu;
label_179adc:
    // 0x179adc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x179ADCu;
    {
        const bool branch_taken_0x179adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ADCu;
        // 0x179ae0: 0x4602b002  mul.s       $f0, $f22, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179adc) {
            ctx->pc = 0x179BD4u;
            goto label_179bd4;
        }
    }
    ctx->pc = 0x179AE4u;
label_179ae4:
    // 0x179ae4: 0xc060b58  jal         func_182D60
    ctx->pc = 0x179AE4u;
    SET_GPR_U32(ctx, 31, 0x179AECu);
    ctx->pc = 0x179AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179AE4u;
    // 0x179ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x179AE4u, 0x179AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AECu;
label_179aec:
    // 0x179aec: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x179aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x179af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179af4: 0xc06078e  jal         func_181E38
    ctx->pc = 0x179AF4u;
    SET_GPR_U32(ctx, 31, 0x179AFCu);
    ctx->pc = 0x179AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179AF4u;
    // 0x179af8: 0x702821  addu        $a1, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x179AF4u, 0x179AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AFCu;
label_179afc:
    // 0x179afc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b00: 0xc060b58  jal         func_182D60
    ctx->pc = 0x179B00u;
    SET_GPR_U32(ctx, 31, 0x179B08u);
    ctx->pc = 0x179B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B00u;
    // 0x179b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x179B00u, 0x179B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B08u;
label_179b08:
    // 0x179b08: 0xc06078a  jal         func_181E28
    ctx->pc = 0x179B08u;
    SET_GPR_U32(ctx, 31, 0x179B10u);
    ctx->pc = 0x179B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B08u;
    // 0x179b0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E28u, 0x179B08u, 0x179B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B10u;
label_179b10:
    // 0x179b10: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x179b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179b14: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x179b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179b18: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179B18u;
    {
        const bool branch_taken_0x179b18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x179B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B18u;
        // 0x179b1c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b18) {
            ctx->pc = 0x179B34u;
            goto label_179b34;
        }
    }
    ctx->pc = 0x179B20u;
    // 0x179b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179b24: 0x0  nop
    ctx->pc = 0x179b24u;
    // NOP
    // 0x179b28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x179b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x179b2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x179B2Cu;
    {
        const bool branch_taken_0x179b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B2Cu;
        // 0x179b30: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b2c) {
            ctx->pc = 0x179B54u;
            goto label_179b54;
        }
    }
    ctx->pc = 0x179B34u;
label_179b34:
    // 0x179b34: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x179b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x179b38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x179b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x179b3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179b44: 0x0  nop
    ctx->pc = 0x179b44u;
    // NOP
    // 0x179b48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x179b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x179b4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x179b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x179b50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x179b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_179b54:
    // 0x179b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b58: 0xc060b58  jal         func_182D60
    ctx->pc = 0x179B58u;
    SET_GPR_U32(ctx, 31, 0x179B60u);
    ctx->pc = 0x179B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B58u;
    // 0x179b5c: 0x46170500  add.s       $f20, $f0, $f23 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x179B58u, 0x179B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B60u;
label_179b60:
    // 0x179b60: 0xc060786  jal         func_181E18
    ctx->pc = 0x179B60u;
    SET_GPR_U32(ctx, 31, 0x179B68u);
    ctx->pc = 0x179B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B60u;
    // 0x179b64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E18u, 0x179B60u, 0x179B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B68u;
label_179b68:
    // 0x179b68: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x179b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179b6c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x179b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179b70: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179B70u;
    {
        const bool branch_taken_0x179b70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x179B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B70u;
        // 0x179b74: 0x46010081  sub.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b70) {
            ctx->pc = 0x179B8Cu;
            goto label_179b8c;
        }
    }
    ctx->pc = 0x179B78u;
    // 0x179b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179b7c: 0x0  nop
    ctx->pc = 0x179b7cu;
    // NOP
    // 0x179b80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x179b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x179b84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x179B84u;
    {
        const bool branch_taken_0x179b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B84u;
        // 0x179b88: 0xc6810000  lwc1        $f1, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b84) {
            ctx->pc = 0x179BACu;
            goto label_179bac;
        }
    }
    ctx->pc = 0x179B8Cu;
label_179b8c:
    // 0x179b8c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x179b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x179b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x179b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x179b94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179b9c: 0x0  nop
    ctx->pc = 0x179b9cu;
    // NOP
    // 0x179ba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x179ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x179ba4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x179ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x179ba8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x179ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179bac:
    // 0x179bac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x179bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x179bb0: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x179bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179bb4: 0x0  nop
    ctx->pc = 0x179bb4u;
    // NOP
    // 0x179bb8: 0x0  nop
    ctx->pc = 0x179bb8u;
    // NOP
    // 0x179bbc: 0x461408c3  div.s       $f3, $f1, $f20
    ctx->pc = 0x179bbcu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x179bc0: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x179bc0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x179bc4: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x179bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x179bc8: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x179bc8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
    // 0x179bcc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x179bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x179bd0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x179bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_179bd4:
    // 0x179bd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x179bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x179bd8: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x179bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x179bdc: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x179BDCu;
    {
        const bool branch_taken_0x179bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BDCu;
        // 0x179be0: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bdc) {
            ctx->pc = 0x179A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179a78;
        }
    }
    ctx->pc = 0x179BE4u;
label_179be4:
    // 0x179be4: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x179be4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_179be8:
    // 0x179be8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x179be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_179bec:
    // 0x179bec: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x179becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x179bf0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x179bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x179bf4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x179bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x179bf8: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x179bf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x179bfc: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x179bfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179c00: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x179c00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x179c04: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x179c04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x179c08: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x179c08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x179c0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x179c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x179c10: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x179c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x179c14: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x179c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x179c18: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x179c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x179c1c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x179c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x179c20: 0x3e00008  jr          $ra
    ctx->pc = 0x179C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C20u;
        // 0x179c24: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179C28u;
    // 0x179c28: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x179c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x179c2c: 0x0  nop
    ctx->pc = 0x179c2cu;
    // NOP
    ctx->pc = 0x179c30u;
}
