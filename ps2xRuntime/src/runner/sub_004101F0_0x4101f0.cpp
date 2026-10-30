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

// Function: sub_004101F0
// Address: 0x4101f0 - 0x4102f0
void sub_004101F0_0x4101f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004101F0_0x4101f0");
#endif

    switch (ctx->pc) {
        case 0x4101f0u: goto label_4101f0;
        case 0x4101f4u: goto label_4101f4;
        case 0x4101f8u: goto label_4101f8;
        case 0x4101fcu: goto label_4101fc;
        case 0x410200u: goto label_410200;
        case 0x410204u: goto label_410204;
        case 0x410208u: goto label_410208;
        case 0x41020cu: goto label_41020c;
        case 0x410210u: goto label_410210;
        case 0x410214u: goto label_410214;
        case 0x410218u: goto label_410218;
        case 0x41021cu: goto label_41021c;
        case 0x410220u: goto label_410220;
        case 0x410224u: goto label_410224;
        case 0x410228u: goto label_410228;
        case 0x41022cu: goto label_41022c;
        case 0x410230u: goto label_410230;
        case 0x410234u: goto label_410234;
        case 0x410238u: goto label_410238;
        case 0x41023cu: goto label_41023c;
        case 0x410240u: goto label_410240;
        case 0x410244u: goto label_410244;
        case 0x410248u: goto label_410248;
        case 0x41024cu: goto label_41024c;
        case 0x410250u: goto label_410250;
        case 0x410254u: goto label_410254;
        case 0x410258u: goto label_410258;
        case 0x41025cu: goto label_41025c;
        case 0x410260u: goto label_410260;
        case 0x410264u: goto label_410264;
        case 0x410268u: goto label_410268;
        case 0x41026cu: goto label_41026c;
        case 0x410270u: goto label_410270;
        case 0x410274u: goto label_410274;
        case 0x410278u: goto label_410278;
        case 0x41027cu: goto label_41027c;
        case 0x410280u: goto label_410280;
        case 0x410284u: goto label_410284;
        case 0x410288u: goto label_410288;
        case 0x41028cu: goto label_41028c;
        case 0x410290u: goto label_410290;
        case 0x410294u: goto label_410294;
        case 0x410298u: goto label_410298;
        case 0x41029cu: goto label_41029c;
        case 0x4102a0u: goto label_4102a0;
        case 0x4102a4u: goto label_4102a4;
        case 0x4102a8u: goto label_4102a8;
        case 0x4102acu: goto label_4102ac;
        case 0x4102b0u: goto label_4102b0;
        case 0x4102b4u: goto label_4102b4;
        case 0x4102b8u: goto label_4102b8;
        case 0x4102bcu: goto label_4102bc;
        case 0x4102c0u: goto label_4102c0;
        case 0x4102c4u: goto label_4102c4;
        case 0x4102c8u: goto label_4102c8;
        case 0x4102ccu: goto label_4102cc;
        case 0x4102d0u: goto label_4102d0;
        case 0x4102d4u: goto label_4102d4;
        case 0x4102d8u: goto label_4102d8;
        case 0x4102dcu: goto label_4102dc;
        case 0x4102e0u: goto label_4102e0;
        case 0x4102e4u: goto label_4102e4;
        case 0x4102e8u: goto label_4102e8;
        case 0x4102ecu: goto label_4102ec;
        default: break;
    }

    ctx->pc = 0x4101f0u;

label_4101f0:
    // 0x4101f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4101f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4101f4:
    // 0x4101f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4101f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4101f8:
    // 0x4101f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4101f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4101fc:
    // 0x4101fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4101fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410200:
    // 0x410200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x410200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_410204:
    // 0x410204: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x410204u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_410208:
    // 0x410208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x410208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41020c:
    // 0x41020c: 0xc047ab8  jal         func_11EAE0
label_410210:
    if (ctx->pc == 0x410210u) {
        ctx->pc = 0x410210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41020Cu;
        // 0x410210: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410214u;
        goto label_410214;
    }
    ctx->pc = 0x41020Cu;
    SET_GPR_U32(ctx, 31, 0x410214u);
    ctx->pc = 0x410210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41020Cu;
    // 0x410210: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x41020Cu, 0x410214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410214u;
label_410214:
    // 0x410214: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x410214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_410218:
    // 0x410218: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x410218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_41021c:
    // 0x41021c: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
label_410220:
    if (ctx->pc == 0x410220u) {
        ctx->pc = 0x410220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41021Cu;
        // 0x410220: 0xc4548d6c  lwc1        $f20, -0x7294($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x410224u;
        goto label_410224;
    }
    ctx->pc = 0x41021Cu;
    {
        const bool branch_taken_0x41021c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x410220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41021Cu;
        // 0x410220: 0xc4548d6c  lwc1        $f20, -0x7294($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41021c) {
            ctx->pc = 0x4102D0u;
            goto label_4102d0;
        }
    }
    ctx->pc = 0x410224u;
label_410224:
    // 0x410224: 0x0  nop
    ctx->pc = 0x410224u;
    // NOP
label_410228:
    // 0x410228: 0xc047e6c  jal         func_11F9B0
label_41022c:
    if (ctx->pc == 0x41022Cu) {
        ctx->pc = 0x41022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410228u;
        // 0x41022c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410230u;
        goto label_410230;
    }
    ctx->pc = 0x410228u;
    SET_GPR_U32(ctx, 31, 0x410230u);
    ctx->pc = 0x41022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410228u;
    // 0x41022c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x410228u, 0x410230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410230u;
label_410230:
    // 0x410230: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x410230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_410234:
    // 0x410234: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x410234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_410238:
    // 0x410238: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x410238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_41023c:
    // 0x41023c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x41023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_410240:
    // 0x410240: 0xa0f809  jalr        $a1
label_410244:
    if (ctx->pc == 0x410244u) {
        ctx->pc = 0x410244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410240u;
        // 0x410244: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410248u;
        goto label_410248;
    }
    ctx->pc = 0x410240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x410248u);
        ctx->pc = 0x410244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410240u;
        // 0x410244: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410240u, 0x410248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410248u;
label_410248:
    // 0x410248: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x410248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41024c:
    // 0x41024c: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x41024cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_410250:
    // 0x410250: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x410250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_410254:
    // 0x410254: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x410254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_410258:
    // 0x410258: 0x460209c1  sub.s       $f7, $f1, $f2
    ctx->pc = 0x410258u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_41025c:
    // 0x41025c: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x41025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_410260:
    // 0x410260: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x410260u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_410264:
    // 0x410264: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x410264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_410268:
    // 0x410268: 0xc6060014  lwc1        $f6, 0x14($s0)
    ctx->pc = 0x410268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_41026c:
    // 0x41026c: 0x460738c2  mul.s       $f3, $f7, $f7
    ctx->pc = 0x41026cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_410270:
    // 0x410270: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x410270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_410274:
    // 0x410274: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x410274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_410278:
    // 0x410278: 0x460018e9  min.s       $f3, $f3, $f0
    ctx->pc = 0x410278u;
    ctx->f[3] = std::min(ctx->f[3], ctx->f[0]);
label_41027c:
    // 0x41027c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x41027cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_410280:
    // 0x410280: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x410280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_410284:
    // 0x410284: 0x46020201  sub.s       $f8, $f0, $f2
    ctx->pc = 0x410284u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_410288:
    // 0x410288: 0x460401c1  sub.s       $f7, $f0, $f4
    ctx->pc = 0x410288u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_41028c:
    // 0x41028c: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x41028cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_410290:
    // 0x410290: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x410290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_410294:
    // 0x410294: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x410294u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_410298:
    // 0x410298: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x410298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_41029c:
    // 0x41029c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x41029cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_4102a0:
    // 0x4102a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4102a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4102a4:
    // 0x4102a4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4102a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_4102a8:
    // 0x4102a8: 0x46050a01  sub.s       $f8, $f1, $f5
    ctx->pc = 0x4102a8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_4102ac:
    // 0x4102ac: 0x460609c1  sub.s       $f7, $f1, $f6
    ctx->pc = 0x4102acu;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_4102b0:
    // 0x4102b0: 0x46084082  mul.s       $f2, $f8, $f8
    ctx->pc = 0x4102b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_4102b4:
    // 0x4102b4: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x4102b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_4102b8:
    // 0x4102b8: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x4102b8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_4102bc:
    // 0x4102bc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x4102bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_4102c0:
    // 0x4102c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x4102c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4102c4:
    // 0x4102c4: 0x4603a529  min.s       $f20, $f20, $f3
    ctx->pc = 0x4102c4u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[3]);
label_4102c8:
    // 0x4102c8: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_4102cc:
    if (ctx->pc == 0x4102CCu) {
        ctx->pc = 0x4102D0u;
        goto label_4102d0;
    }
    ctx->pc = 0x4102C8u;
    {
        const bool branch_taken_0x4102c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4102c8) {
            ctx->pc = 0x410228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410228;
        }
    }
    ctx->pc = 0x4102D0u;
label_4102d0:
    // 0x4102d0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x4102d0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_4102d4:
    // 0x4102d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4102d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4102d8:
    // 0x4102d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4102d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4102dc:
    // 0x4102dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4102dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4102e0:
    // 0x4102e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4102e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4102e4:
    // 0x4102e4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x4102e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4102e8:
    // 0x4102e8: 0x3e00008  jr          $ra
label_4102ec:
    if (ctx->pc == 0x4102ECu) {
        ctx->pc = 0x4102ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4102E8u;
        // 0x4102ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4102F0u;
        goto label_fallthrough_0x4102e8;
    }
    ctx->pc = 0x4102E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4102ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4102E8u;
        // 0x4102ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4102E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4102e8:
    ctx->pc = 0x4102F0u;
}
