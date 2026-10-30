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

// Function: sub_00195238
// Address: 0x195238 - 0x195330
void sub_00195238_0x195238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195238_0x195238");
#endif

    switch (ctx->pc) {
        case 0x195238u: goto label_195238;
        case 0x19523cu: goto label_19523c;
        case 0x195240u: goto label_195240;
        case 0x195244u: goto label_195244;
        case 0x195248u: goto label_195248;
        case 0x19524cu: goto label_19524c;
        case 0x195250u: goto label_195250;
        case 0x195254u: goto label_195254;
        case 0x195258u: goto label_195258;
        case 0x19525cu: goto label_19525c;
        case 0x195260u: goto label_195260;
        case 0x195264u: goto label_195264;
        case 0x195268u: goto label_195268;
        case 0x19526cu: goto label_19526c;
        case 0x195270u: goto label_195270;
        case 0x195274u: goto label_195274;
        case 0x195278u: goto label_195278;
        case 0x19527cu: goto label_19527c;
        case 0x195280u: goto label_195280;
        case 0x195284u: goto label_195284;
        case 0x195288u: goto label_195288;
        case 0x19528cu: goto label_19528c;
        case 0x195290u: goto label_195290;
        case 0x195294u: goto label_195294;
        case 0x195298u: goto label_195298;
        case 0x19529cu: goto label_19529c;
        case 0x1952a0u: goto label_1952a0;
        case 0x1952a4u: goto label_1952a4;
        case 0x1952a8u: goto label_1952a8;
        case 0x1952acu: goto label_1952ac;
        case 0x1952b0u: goto label_1952b0;
        case 0x1952b4u: goto label_1952b4;
        case 0x1952b8u: goto label_1952b8;
        case 0x1952bcu: goto label_1952bc;
        case 0x1952c0u: goto label_1952c0;
        case 0x1952c4u: goto label_1952c4;
        case 0x1952c8u: goto label_1952c8;
        case 0x1952ccu: goto label_1952cc;
        case 0x1952d0u: goto label_1952d0;
        case 0x1952d4u: goto label_1952d4;
        case 0x1952d8u: goto label_1952d8;
        case 0x1952dcu: goto label_1952dc;
        case 0x1952e0u: goto label_1952e0;
        case 0x1952e4u: goto label_1952e4;
        case 0x1952e8u: goto label_1952e8;
        case 0x1952ecu: goto label_1952ec;
        case 0x1952f0u: goto label_1952f0;
        case 0x1952f4u: goto label_1952f4;
        case 0x1952f8u: goto label_1952f8;
        case 0x1952fcu: goto label_1952fc;
        case 0x195300u: goto label_195300;
        case 0x195304u: goto label_195304;
        case 0x195308u: goto label_195308;
        case 0x19530cu: goto label_19530c;
        case 0x195310u: goto label_195310;
        case 0x195314u: goto label_195314;
        case 0x195318u: goto label_195318;
        case 0x19531cu: goto label_19531c;
        case 0x195320u: goto label_195320;
        case 0x195324u: goto label_195324;
        case 0x195328u: goto label_195328;
        case 0x19532cu: goto label_19532c;
        default: break;
    }

    ctx->pc = 0x195238u;

label_195238:
    // 0x195238: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x195238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19523c:
    // 0x19523c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_195240:
    // 0x195240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_195244:
    // 0x195244: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x195244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_195248:
    // 0x195248: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19524c:
    // 0x19524c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19524cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195250:
    // 0x195250: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x195250u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_195254:
    // 0x195254: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x195254u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_195258:
    // 0x195258: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x195258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19525c:
    // 0x19525c: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x19525cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_195260:
    // 0x195260: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x195260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_195264:
    // 0x195264: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x195264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_195268:
    // 0x195268: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x195268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_19526c:
    // 0x19526c: 0x60f809  jalr        $v1
label_195270:
    if (ctx->pc == 0x195270u) {
        ctx->pc = 0x195270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19526Cu;
        // 0x195270: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195274u;
        goto label_195274;
    }
    ctx->pc = 0x19526Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x195274u);
        ctx->pc = 0x195270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19526Cu;
        // 0x195270: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19526Cu, 0x195274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195274u;
label_195274:
    // 0x195274: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x195274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_195278:
    // 0x195278: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x195278u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_19527c:
    // 0x19527c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x19527cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_195280:
    // 0x195280: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x195280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_195284:
    // 0x195284: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x195284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_195288:
    // 0x195288: 0x60f809  jalr        $v1
label_19528c:
    if (ctx->pc == 0x19528Cu) {
        ctx->pc = 0x19528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195288u;
        // 0x19528c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195290u;
        goto label_195290;
    }
    ctx->pc = 0x195288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x195290u);
        ctx->pc = 0x19528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195288u;
        // 0x19528c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195288u, 0x195290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195290u;
label_195290:
    // 0x195290: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x195290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_195294:
    // 0x195294: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x195294u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_195298:
    // 0x195298: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x195298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_19529c:
    // 0x19529c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x19529cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1952a0:
    // 0x1952a0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1952a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1952a4:
    // 0x1952a4: 0x60f809  jalr        $v1
label_1952a8:
    if (ctx->pc == 0x1952A8u) {
        ctx->pc = 0x1952A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952A4u;
        // 0x1952a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952ACu;
        goto label_1952ac;
    }
    ctx->pc = 0x1952A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1952ACu);
        ctx->pc = 0x1952A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952A4u;
        // 0x1952a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1952A4u, 0x1952ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1952ACu;
label_1952ac:
    // 0x1952ac: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x1952acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_1952b0:
    // 0x1952b0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1952b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1952b4:
    // 0x1952b4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1952b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1952b8:
    // 0x1952b8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1952b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1952bc:
    // 0x1952bc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1952bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1952c0:
    // 0x1952c0: 0x60f809  jalr        $v1
label_1952c4:
    if (ctx->pc == 0x1952C4u) {
        ctx->pc = 0x1952C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952C0u;
        // 0x1952c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952C8u;
        goto label_1952c8;
    }
    ctx->pc = 0x1952C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1952C8u);
        ctx->pc = 0x1952C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952C0u;
        // 0x1952c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1952C0u, 0x1952C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1952C8u;
label_1952c8:
    // 0x1952c8: 0x4616a503  div.s       $f20, $f20, $f22
    ctx->pc = 0x1952c8u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
label_1952cc:
    // 0x1952cc: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1952ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1952d0:
    // 0x1952d0: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x1952d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_1952d4:
    // 0x1952d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1952d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1952d8:
    // 0x1952d8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1952d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1952dc:
    // 0x1952dc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1952dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1952e0:
    // 0x1952e0: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1952e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1952e4:
    // 0x1952e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1952e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1952e8:
    // 0x1952e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1952e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1952ec:
    // 0x1952ec: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1952ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1952f0:
    // 0x1952f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1952f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1952f4:
    // 0x1952f4: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1952f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1952f8:
    // 0x1952f8: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x1952f8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_1952fc:
    // 0x1952fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1952fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195300:
    // 0x195300: 0x4602ad42  mul.s       $f21, $f21, $f2
    ctx->pc = 0x195300u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_195304:
    // 0x195304: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x195304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_195308:
    // 0x195308: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x195308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_19530c:
    // 0x19530c: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x19530cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_195310:
    // 0x195310: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x195310u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_195314:
    // 0x195314: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x195314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_195318:
    // 0x195318: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x195318u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_19531c:
    // 0x19531c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19531cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195320:
    // 0x195320: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x195320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_195324:
    // 0x195324: 0x3e00008  jr          $ra
label_195328:
    if (ctx->pc == 0x195328u) {
        ctx->pc = 0x195328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195324u;
        // 0x195328: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19532Cu;
        goto label_19532c;
    }
    ctx->pc = 0x195324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195324u;
        // 0x195328: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19532Cu;
label_19532c:
    // 0x19532c: 0x0  nop
    ctx->pc = 0x19532cu;
    // NOP
    ctx->pc = 0x195330u;
}
