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

// Function: sub_002D6228
// Address: 0x2d6228 - 0x2d6638
void sub_002D6228_0x2d6228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6228_0x2d6228");
#endif

    switch (ctx->pc) {
        case 0x2d6284u: goto label_2d6284;
        case 0x2d629cu: goto label_2d629c;
        case 0x2d62ecu: goto label_2d62ec;
        case 0x2d633cu: goto label_2d633c;
        case 0x2d638cu: goto label_2d638c;
        case 0x2d6550u: goto label_2d6550;
        case 0x2d65c0u: goto label_2d65c0;
        case 0x2d65d8u: goto label_2d65d8;
        case 0x2d6600u: goto label_2d6600;
        default: break;
    }

    ctx->pc = 0x2d6228u;

    // 0x2d6228: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x2d6228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x2d622c: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x2d622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
    // 0x2d6230: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x2d6230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
    // 0x2d6234: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2d6234u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x2d6238: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x2d6238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
    // 0x2d623c: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2d623cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x2d6240: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x2d6240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
    // 0x2d6244: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2d6244u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x2d6248: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x2d6248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
    // 0x2d624c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d624cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6250: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x2d6250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
    // 0x2d6254: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d6254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6258: 0x7fb60170  sq          $s6, 0x170($sp)
    ctx->pc = 0x2d6258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 22));
    // 0x2d625c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d625cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6260: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x2d6260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x2d6264: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2d6264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d6268: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x2d6268u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d626c: 0x26d10090  addiu       $s1, $s6, 0x90
    ctx->pc = 0x2d626cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x2d6270: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2d6270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d6274: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d6274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d6278: 0x50a821  addu        $s5, $v0, $s0
    ctx->pc = 0x2d6278u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d627c: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2D627Cu;
    SET_GPR_U32(ctx, 31, 0x2D6284u);
    ctx->pc = 0x2D6280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D627Cu;
    // 0x2d6280: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2D627Cu, 0x2D6284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6284u;
label_2d6284:
    // 0x2d6284: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2d6284u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d6288: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d6288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d628c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d628cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d6290: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2d6290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2d6294: 0xc0cd8c2  jal         func_336308
    ctx->pc = 0x2D6294u;
    SET_GPR_U32(ctx, 31, 0x2D629Cu);
    ctx->pc = 0x2D6298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6294u;
    // 0x2d6298: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2D6294u, 0x2D629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D629Cu;
label_2d629c:
    // 0x2d629c: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x2d629cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d62a0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2d62a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d62a4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2d62a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2d62a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d62a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d62ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d62acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d62b0: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2d62b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d62b4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d62b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2d62b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d62b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62bc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2d62bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d62c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d62c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62c4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2d62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d62c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d62c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62cc: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x2d62ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d62d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d62d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d62d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d62d8: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x2d62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
    // 0x2d62dc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d62dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d62e0: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2d62e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d62e4: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2D62E4u;
    SET_GPR_U32(ctx, 31, 0x2D62ECu);
    ctx->pc = 0x2D62E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D62E4u;
    // 0x2d62e8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2D62E4u, 0x2D62ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D62ECu;
label_2d62ec:
    // 0x2d62ec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d62ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d62f0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2d62f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d62f4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2d62f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d62f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d62f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62fc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2d62fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6300: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d6300u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6304: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d6304u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d6308: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2d6308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d630c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d630cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d6310: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x2d6310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
    // 0x2d6314: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2d6314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2d6318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d6318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d631c: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x2d631cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2d6320: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d6320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6324: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x2d6324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2d6328: 0xe7a3012c  swc1        $f3, 0x12C($sp)
    ctx->pc = 0x2d6328u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2d632c: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x2d632cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d6330: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d6330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d6334: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2D6334u;
    SET_GPR_U32(ctx, 31, 0x2D633Cu);
    ctx->pc = 0x2D6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6334u;
    // 0x2d6338: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2D6334u, 0x2D633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D633Cu;
label_2d633c:
    // 0x2d633c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2d633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d6340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6344: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2d6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6348: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2d6348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d634c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2d634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6350: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d6350u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6354: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d6354u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d6358: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2d6358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d635c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d635cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d6360: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x2d6360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
    // 0x2d6364: 0xe7a3012c  swc1        $f3, 0x12C($sp)
    ctx->pc = 0x2d6364u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2d6368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d6368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d636c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2d636cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2d6370: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d6370u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6374: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x2d6374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2d6378: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x2d6378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2d637c: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x2d637cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d6380: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d6380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d6384: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2D6384u;
    SET_GPR_U32(ctx, 31, 0x2D638Cu);
    ctx->pc = 0x2D6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6384u;
    // 0x2d6388: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2D6384u, 0x2D638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D638Cu;
label_2d638c:
    // 0x2d638c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2d638cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6390: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d6390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6394: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2d6394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2d6398: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d6398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d639c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d63a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d63a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d63a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d63a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d63a8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D63A8u;
    {
        const bool branch_taken_0x2d63a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63A8u;
        // 0x2d63ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63a8) {
            ctx->pc = 0x2D6400u;
            goto label_2d6400;
        }
    }
    ctx->pc = 0x2D63B0u;
    // 0x2d63b0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d63b4: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D63B4u;
    {
        const bool branch_taken_0x2d63b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63B4u;
        // 0x2d63b8: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63b4) {
            ctx->pc = 0x2D63F8u;
            goto label_2d63f8;
        }
    }
    ctx->pc = 0x2D63BCu;
    // 0x2d63bc: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2d63bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d63c0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2d63c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d63c4: 0x0  nop
    ctx->pc = 0x2d63c4u;
    // NOP
    // 0x2d63c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2D63C8u;
    {
        const bool branch_taken_0x2d63c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d63c8) {
            ctx->pc = 0x2D63E8u;
            goto label_2d63e8;
        }
    }
    ctx->pc = 0x2D63D0u;
    // 0x2d63d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2d63d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2d63d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d63d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d63d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d63d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d63dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d63dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d63e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D63E0u;
    {
        const bool branch_taken_0x2d63e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63E0u;
        // 0x2d63e4: 0x46001101  sub.s       $f4, $f2, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63e0) {
            ctx->pc = 0x2D6400u;
            goto label_2d6400;
        }
    }
    ctx->pc = 0x2D63E8u;
label_2d63e8:
    // 0x2d63e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2d63e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2d63ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d63ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d63f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D63F0u;
    {
        const bool branch_taken_0x2d63f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63F0u;
        // 0x2d63f4: 0x46000901  sub.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63f0) {
            ctx->pc = 0x2D6400u;
            goto label_2d6400;
        }
    }
    ctx->pc = 0x2D63F8u;
label_2d63f8:
    // 0x2d63f8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d63f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d63fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d63fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2d6400:
    // 0x2d6400: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2d6400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d6404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6408: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d6408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d640c: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D640Cu;
    {
        const bool branch_taken_0x2d640c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D640Cu;
        // 0x2d6410: 0x46022128  max.s       $f4, $f4, $f2 (Delay Slot)
        ctx->f[4] = std::max(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d640c) {
            ctx->pc = 0x2D6444u;
            goto label_2d6444;
        }
    }
    ctx->pc = 0x2D6414u;
    // 0x2d6414: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2d6414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6418: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2d6418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2d641c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d641cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6420: 0x0  nop
    ctx->pc = 0x2d6420u;
    // NOP
    // 0x2d6424: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d6424u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6428: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x2d6428u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
    // 0x2d642c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x2d642cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6430: 0x0  nop
    ctx->pc = 0x2d6430u;
    // NOP
    // 0x2d6434: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6434u;
    {
        const bool branch_taken_0x2d6434 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6434) {
            ctx->pc = 0x2D6444u;
            goto label_2d6444;
        }
    }
    ctx->pc = 0x2D643Cu;
    // 0x2d643c: 0x46000906  mov.s       $f4, $f1
    ctx->pc = 0x2d643cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[1]);
    // 0x2d6440: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x2d6440u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
label_2d6444:
    // 0x2d6444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6448: 0x0  nop
    ctx->pc = 0x2d6448u;
    // NOP
    // 0x2d644c: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x2d644cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6450: 0x0  nop
    ctx->pc = 0x2d6450u;
    // NOP
    // 0x2d6454: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2D6454u;
    {
        const bool branch_taken_0x2d6454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6454u;
        // 0x2d6458: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6454) {
            ctx->pc = 0x2D64B4u;
            goto label_2d64b4;
        }
    }
    ctx->pc = 0x2D645Cu;
    // 0x2d645c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2d645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6460: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2d6460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6464: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d6464u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6468: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d6468u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d646c: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2d646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d6470: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d6470u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d6474: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2d6474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2d6478: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x2d6478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2d647c: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x2d647cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2d6480: 0xe7a3013c  swc1        $f3, 0x13C($sp)
    ctx->pc = 0x2d6480u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2d6484: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x2d6484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d6488: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x2d6488u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d648c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d648cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d6490: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2d6490u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d6494: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d6494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d6498: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d6498u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d649c: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x2d649cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x2d64a0: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x2d64a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x2d64a4: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x2d64a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x2d64a8: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2d64a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x2d64ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D64ACu;
    {
        const bool branch_taken_0x2d64ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D64B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64ACu;
        // 0x2d64b0: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d64ac) {
            ctx->pc = 0x2D64FCu;
            goto label_2d64fc;
        }
    }
    ctx->pc = 0x2D64B4u;
label_2d64b4:
    // 0x2d64b4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2d64b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d64b8: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x2d64b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d64bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d64bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d64c0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d64c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d64c4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d64c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d64c8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d64c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d64cc: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x2d64ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d64d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d64d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d64d4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2d64d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d64d8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d64d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d64dc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2d64dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d64e0: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2d64e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x2d64e4: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x2d64e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x2d64e8: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x2d64e8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x2d64ec: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2d64ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x2d64f0: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x2d64f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
    // 0x2d64f4: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x2d64f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x2d64f8: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x2d64f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_2d64fc:
    // 0x2d64fc: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2d64fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d6500: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2d6500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2d6504: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2d6504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6508: 0x24901770  addiu       $s0, $a0, 0x1770
    ctx->pc = 0x2d6508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 6000));
    // 0x2d650c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d650cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d6510: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d6510u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d6514: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d6514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d6518: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d6518u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d651c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2d651cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d6520: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2d6520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2d6524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d6524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6528: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x2d6528u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x2d652c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d652cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6530: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x2d6530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
    // 0x2d6534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d6534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6538: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2d6538u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d653c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2d653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2d6540: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d6540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d6544: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2d6544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d6548: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2D6548u;
    SET_GPR_U32(ctx, 31, 0x2D6550u);
    ctx->pc = 0x2D654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6548u;
    // 0x2d654c: 0x7fa30110  sq          $v1, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2D6548u, 0x2D6550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6550u;
label_2d6550:
    // 0x2d6550: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2d6550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6554: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D6554u;
    {
        const bool branch_taken_0x2d6554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6554u;
        // 0x2d6558: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6554) {
            ctx->pc = 0x2D660Cu;
            goto label_2d660c;
        }
    }
    ctx->pc = 0x2D655Cu;
    // 0x2d655c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d655cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6560: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2d6560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2d6564: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d6564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6568: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2d6568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d656c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d656cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d6570: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2d6570u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d6574: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2d6574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d6578: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d6578u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d657c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2d657cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d6580: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d6580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d6584: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d6584u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d6588: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d6588u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d658c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d658cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d6590: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d6590u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d6594: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d6594u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d6598: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2d6598u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d659c: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2d659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x2d65a0: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x2d65a0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x2d65a4: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x2d65a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x2d65a8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2d65a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d65ac: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2d65acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x2d65b0: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x2d65b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
    // 0x2d65b4: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x2d65b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x2d65b8: 0xc0a3fce  jal         func_28FF38
    ctx->pc = 0x2D65B8u;
    SET_GPR_U32(ctx, 31, 0x2D65C0u);
    ctx->pc = 0x2D65BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65B8u;
    // 0x2d65bc: 0x7fa30110  sq          $v1, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2D65B8u, 0x2D65C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65C0u;
label_2d65c0:
    // 0x2d65c0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D65C0u;
    {
        const bool branch_taken_0x2d65c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D65C0u;
        // 0x2d65c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d65c0) {
            ctx->pc = 0x2D660Cu;
            goto label_2d660c;
        }
    }
    ctx->pc = 0x2D65C8u;
    // 0x2d65c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d65c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d65ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65d0: 0xc088878  jal         func_2221E0
    ctx->pc = 0x2D65D0u;
    SET_GPR_U32(ctx, 31, 0x2D65D8u);
    ctx->pc = 0x2D65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65D0u;
    // 0x2d65d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2D65D0u, 0x2D65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65D8u;
label_2d65d8:
    // 0x2d65d8: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D65D8u;
    {
        const bool branch_taken_0x2d65d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D65D8u;
        // 0x2d65dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d65d8) {
            ctx->pc = 0x2D65E8u;
            goto label_2d65e8;
        }
    }
    ctx->pc = 0x2D65E0u;
    // 0x2d65e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D65E0u;
    {
        const bool branch_taken_0x2d65e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D65E0u;
        // 0x2d65e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d65e0) {
            ctx->pc = 0x2D6610u;
            goto label_2d6610;
        }
    }
    ctx->pc = 0x2D65E8u;
label_2d65e8:
    // 0x2d65e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d65e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d65ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d65f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d65f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65f8: 0xc09381e  jal         func_24E078
    ctx->pc = 0x2D65F8u;
    SET_GPR_U32(ctx, 31, 0x2D6600u);
    ctx->pc = 0x2D65FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65F8u;
    // 0x2d65fc: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2D65F8u, 0x2D6600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6600u;
label_2d6600:
    // 0x2d6600: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d6600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6604: 0x10700002  beq         $v1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D6604u;
    {
        const bool branch_taken_0x2d6604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6604u;
        // 0x2d6608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6604) {
            ctx->pc = 0x2D6610u;
            goto label_2d6610;
        }
    }
    ctx->pc = 0x2D660Cu;
label_2d660c:
    // 0x2d660c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d660cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6610:
    // 0x2d6610: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x2d6610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2d6614: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x2d6614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2d6618: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x2d6618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2d661c: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x2d661cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2d6620: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x2d6620u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2d6624: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x2d6624u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2d6628: 0x7bb60170  lq          $s6, 0x170($sp)
    ctx->pc = 0x2d6628u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2d662c: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x2d662cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2d6630: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6630u;
        // 0x2d6634: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6638u;
}
