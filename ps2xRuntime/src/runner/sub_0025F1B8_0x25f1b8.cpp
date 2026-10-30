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

// Function: sub_0025F1B8
// Address: 0x25f1b8 - 0x25f450
void sub_0025F1B8_0x25f1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F1B8_0x25f1b8");
#endif

    switch (ctx->pc) {
        case 0x25f1b8u: goto label_25f1b8;
        case 0x25f1bcu: goto label_25f1bc;
        case 0x25f1c0u: goto label_25f1c0;
        case 0x25f1c4u: goto label_25f1c4;
        case 0x25f1c8u: goto label_25f1c8;
        case 0x25f1ccu: goto label_25f1cc;
        case 0x25f1d0u: goto label_25f1d0;
        case 0x25f1d4u: goto label_25f1d4;
        case 0x25f1d8u: goto label_25f1d8;
        case 0x25f1dcu: goto label_25f1dc;
        case 0x25f1e0u: goto label_25f1e0;
        case 0x25f1e4u: goto label_25f1e4;
        case 0x25f1e8u: goto label_25f1e8;
        case 0x25f1ecu: goto label_25f1ec;
        case 0x25f1f0u: goto label_25f1f0;
        case 0x25f1f4u: goto label_25f1f4;
        case 0x25f1f8u: goto label_25f1f8;
        case 0x25f1fcu: goto label_25f1fc;
        case 0x25f200u: goto label_25f200;
        case 0x25f204u: goto label_25f204;
        case 0x25f208u: goto label_25f208;
        case 0x25f20cu: goto label_25f20c;
        case 0x25f210u: goto label_25f210;
        case 0x25f214u: goto label_25f214;
        case 0x25f218u: goto label_25f218;
        case 0x25f21cu: goto label_25f21c;
        case 0x25f220u: goto label_25f220;
        case 0x25f224u: goto label_25f224;
        case 0x25f228u: goto label_25f228;
        case 0x25f22cu: goto label_25f22c;
        case 0x25f230u: goto label_25f230;
        case 0x25f234u: goto label_25f234;
        case 0x25f238u: goto label_25f238;
        case 0x25f23cu: goto label_25f23c;
        case 0x25f240u: goto label_25f240;
        case 0x25f244u: goto label_25f244;
        case 0x25f248u: goto label_25f248;
        case 0x25f24cu: goto label_25f24c;
        case 0x25f250u: goto label_25f250;
        case 0x25f254u: goto label_25f254;
        case 0x25f258u: goto label_25f258;
        case 0x25f25cu: goto label_25f25c;
        case 0x25f260u: goto label_25f260;
        case 0x25f264u: goto label_25f264;
        case 0x25f268u: goto label_25f268;
        case 0x25f26cu: goto label_25f26c;
        case 0x25f270u: goto label_25f270;
        case 0x25f274u: goto label_25f274;
        case 0x25f278u: goto label_25f278;
        case 0x25f27cu: goto label_25f27c;
        case 0x25f280u: goto label_25f280;
        case 0x25f284u: goto label_25f284;
        case 0x25f288u: goto label_25f288;
        case 0x25f28cu: goto label_25f28c;
        case 0x25f290u: goto label_25f290;
        case 0x25f294u: goto label_25f294;
        case 0x25f298u: goto label_25f298;
        case 0x25f29cu: goto label_25f29c;
        case 0x25f2a0u: goto label_25f2a0;
        case 0x25f2a4u: goto label_25f2a4;
        case 0x25f2a8u: goto label_25f2a8;
        case 0x25f2acu: goto label_25f2ac;
        case 0x25f2b0u: goto label_25f2b0;
        case 0x25f2b4u: goto label_25f2b4;
        case 0x25f2b8u: goto label_25f2b8;
        case 0x25f2bcu: goto label_25f2bc;
        case 0x25f2c0u: goto label_25f2c0;
        case 0x25f2c4u: goto label_25f2c4;
        case 0x25f2c8u: goto label_25f2c8;
        case 0x25f2ccu: goto label_25f2cc;
        case 0x25f2d0u: goto label_25f2d0;
        case 0x25f2d4u: goto label_25f2d4;
        case 0x25f2d8u: goto label_25f2d8;
        case 0x25f2dcu: goto label_25f2dc;
        case 0x25f2e0u: goto label_25f2e0;
        case 0x25f2e4u: goto label_25f2e4;
        case 0x25f2e8u: goto label_25f2e8;
        case 0x25f2ecu: goto label_25f2ec;
        case 0x25f2f0u: goto label_25f2f0;
        case 0x25f2f4u: goto label_25f2f4;
        case 0x25f2f8u: goto label_25f2f8;
        case 0x25f2fcu: goto label_25f2fc;
        case 0x25f300u: goto label_25f300;
        case 0x25f304u: goto label_25f304;
        case 0x25f308u: goto label_25f308;
        case 0x25f30cu: goto label_25f30c;
        case 0x25f310u: goto label_25f310;
        case 0x25f314u: goto label_25f314;
        case 0x25f318u: goto label_25f318;
        case 0x25f31cu: goto label_25f31c;
        case 0x25f320u: goto label_25f320;
        case 0x25f324u: goto label_25f324;
        case 0x25f328u: goto label_25f328;
        case 0x25f32cu: goto label_25f32c;
        case 0x25f330u: goto label_25f330;
        case 0x25f334u: goto label_25f334;
        case 0x25f338u: goto label_25f338;
        case 0x25f33cu: goto label_25f33c;
        case 0x25f340u: goto label_25f340;
        case 0x25f344u: goto label_25f344;
        case 0x25f348u: goto label_25f348;
        case 0x25f34cu: goto label_25f34c;
        case 0x25f350u: goto label_25f350;
        case 0x25f354u: goto label_25f354;
        case 0x25f358u: goto label_25f358;
        case 0x25f35cu: goto label_25f35c;
        case 0x25f360u: goto label_25f360;
        case 0x25f364u: goto label_25f364;
        case 0x25f368u: goto label_25f368;
        case 0x25f36cu: goto label_25f36c;
        case 0x25f370u: goto label_25f370;
        case 0x25f374u: goto label_25f374;
        case 0x25f378u: goto label_25f378;
        case 0x25f37cu: goto label_25f37c;
        case 0x25f380u: goto label_25f380;
        case 0x25f384u: goto label_25f384;
        case 0x25f388u: goto label_25f388;
        case 0x25f38cu: goto label_25f38c;
        case 0x25f390u: goto label_25f390;
        case 0x25f394u: goto label_25f394;
        case 0x25f398u: goto label_25f398;
        case 0x25f39cu: goto label_25f39c;
        case 0x25f3a0u: goto label_25f3a0;
        case 0x25f3a4u: goto label_25f3a4;
        case 0x25f3a8u: goto label_25f3a8;
        case 0x25f3acu: goto label_25f3ac;
        case 0x25f3b0u: goto label_25f3b0;
        case 0x25f3b4u: goto label_25f3b4;
        case 0x25f3b8u: goto label_25f3b8;
        case 0x25f3bcu: goto label_25f3bc;
        case 0x25f3c0u: goto label_25f3c0;
        case 0x25f3c4u: goto label_25f3c4;
        case 0x25f3c8u: goto label_25f3c8;
        case 0x25f3ccu: goto label_25f3cc;
        case 0x25f3d0u: goto label_25f3d0;
        case 0x25f3d4u: goto label_25f3d4;
        case 0x25f3d8u: goto label_25f3d8;
        case 0x25f3dcu: goto label_25f3dc;
        case 0x25f3e0u: goto label_25f3e0;
        case 0x25f3e4u: goto label_25f3e4;
        case 0x25f3e8u: goto label_25f3e8;
        case 0x25f3ecu: goto label_25f3ec;
        case 0x25f3f0u: goto label_25f3f0;
        case 0x25f3f4u: goto label_25f3f4;
        case 0x25f3f8u: goto label_25f3f8;
        case 0x25f3fcu: goto label_25f3fc;
        case 0x25f400u: goto label_25f400;
        case 0x25f404u: goto label_25f404;
        case 0x25f408u: goto label_25f408;
        case 0x25f40cu: goto label_25f40c;
        case 0x25f410u: goto label_25f410;
        case 0x25f414u: goto label_25f414;
        case 0x25f418u: goto label_25f418;
        case 0x25f41cu: goto label_25f41c;
        case 0x25f420u: goto label_25f420;
        case 0x25f424u: goto label_25f424;
        case 0x25f428u: goto label_25f428;
        case 0x25f42cu: goto label_25f42c;
        case 0x25f430u: goto label_25f430;
        case 0x25f434u: goto label_25f434;
        case 0x25f438u: goto label_25f438;
        case 0x25f43cu: goto label_25f43c;
        case 0x25f440u: goto label_25f440;
        case 0x25f444u: goto label_25f444;
        case 0x25f448u: goto label_25f448;
        case 0x25f44cu: goto label_25f44c;
        default: break;
    }

    ctx->pc = 0x25f1b8u;

label_25f1b8:
    // 0x25f1b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_25f1bc:
    // 0x25f1bc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x25f1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_25f1c0:
    // 0x25f1c0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x25f1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_25f1c4:
    // 0x25f1c4: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25f1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25f1c8:
    // 0x25f1c8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x25f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_25f1cc:
    // 0x25f1cc: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25f1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25f1d0:
    // 0x25f1d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25f1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_25f1d4:
    // 0x25f1d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25f1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25f1d8:
    // 0x25f1d8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x25f1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_25f1dc:
    // 0x25f1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f1e0:
    // 0x25f1e0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x25f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_25f1e4:
    // 0x25f1e4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x25f1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_25f1e8:
    // 0x25f1e8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x25f1e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25f1ec:
    // 0x25f1ec: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x25f1ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_25f1f0:
    // 0x25f1f0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x25f1f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25f1f4:
    // 0x25f1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25f1f8:
    // 0x25f1f8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x25f1f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_25f1fc:
    // 0x25f1fc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x25f1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_25f200:
    // 0x25f200: 0xc041532  jal         func_1054C8
label_25f204:
    if (ctx->pc == 0x25F204u) {
        ctx->pc = 0x25F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F200u;
        // 0x25f204: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F208u;
        goto label_25f208;
    }
    ctx->pc = 0x25F200u;
    SET_GPR_U32(ctx, 31, 0x25F208u);
    ctx->pc = 0x25F204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F200u;
    // 0x25f204: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25F200u, 0x25F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F208u;
label_25f208:
    // 0x25f208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f20c:
    // 0x25f20c: 0xc041532  jal         func_1054C8
label_25f210:
    if (ctx->pc == 0x25F210u) {
        ctx->pc = 0x25F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F20Cu;
        // 0x25f210: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F214u;
        goto label_25f214;
    }
    ctx->pc = 0x25F20Cu;
    SET_GPR_U32(ctx, 31, 0x25F214u);
    ctx->pc = 0x25F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F20Cu;
    // 0x25f210: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25F20Cu, 0x25F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F214u;
label_25f214:
    // 0x25f214: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25f214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f218:
    // 0x25f218: 0xc05d484  jal         func_175210
label_25f21c:
    if (ctx->pc == 0x25F21Cu) {
        ctx->pc = 0x25F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F218u;
        // 0x25f21c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F220u;
        goto label_25f220;
    }
    ctx->pc = 0x25F218u;
    SET_GPR_U32(ctx, 31, 0x25F220u);
    ctx->pc = 0x25F21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F218u;
    // 0x25f21c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25F218u, 0x25F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F220u;
label_25f220:
    // 0x25f220: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_25f224:
    if (ctx->pc == 0x25F224u) {
        ctx->pc = 0x25F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F220u;
        // 0x25f224: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F228u;
        goto label_25f228;
    }
    ctx->pc = 0x25F220u;
    {
        const bool branch_taken_0x25f220 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F220u;
        // 0x25f224: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f220) {
            ctx->pc = 0x25F258u;
            goto label_25f258;
        }
    }
    ctx->pc = 0x25F228u;
label_25f228:
    // 0x25f228: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25f228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25f22c:
    // 0x25f22c: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x25f22cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25f230:
    // 0x25f230: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25f230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25f234:
    // 0x25f234: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25f238:
    // 0x25f238: 0x40f809  jalr        $v0
label_25f23c:
    if (ctx->pc == 0x25F23Cu) {
        ctx->pc = 0x25F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F238u;
        // 0x25f23c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F240u;
        goto label_25f240;
    }
    ctx->pc = 0x25F238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25F240u);
        ctx->pc = 0x25F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F238u;
        // 0x25f23c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F238u, 0x25F240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F240u;
label_25f240:
    // 0x25f240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25f240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f244:
    // 0x25f244: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25f244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25f248:
    // 0x25f248: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25f248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f24c:
    // 0x25f24c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25f24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25f250:
    // 0x25f250: 0xc041b20  jal         func_106C80
label_25f254:
    if (ctx->pc == 0x25F254u) {
        ctx->pc = 0x25F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F250u;
        // 0x25f254: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F258u;
        goto label_25f258;
    }
    ctx->pc = 0x25F250u;
    SET_GPR_U32(ctx, 31, 0x25F258u);
    ctx->pc = 0x25F254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F250u;
    // 0x25f254: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25F250u, 0x25F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F258u;
label_25f258:
    // 0x25f258: 0xc05d484  jal         func_175210
label_25f25c:
    if (ctx->pc == 0x25F25Cu) {
        ctx->pc = 0x25F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F258u;
        // 0x25f25c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F260u;
        goto label_25f260;
    }
    ctx->pc = 0x25F258u;
    SET_GPR_U32(ctx, 31, 0x25F260u);
    ctx->pc = 0x25F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F258u;
    // 0x25f25c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25F258u, 0x25F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F260u;
label_25f260:
    // 0x25f260: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25f264:
    // 0x25f264: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25f264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25f268:
    // 0x25f268: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25f268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25f26c:
    // 0x25f26c: 0xa0f809  jalr        $a1
label_25f270:
    if (ctx->pc == 0x25F270u) {
        ctx->pc = 0x25F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F26Cu;
        // 0x25f270: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F274u;
        goto label_25f274;
    }
    ctx->pc = 0x25F26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25F274u);
        ctx->pc = 0x25F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F26Cu;
        // 0x25f270: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F26Cu, 0x25F274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F274u;
label_25f274:
    // 0x25f274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f278:
    // 0x25f278: 0xc087016  jal         func_21C058
label_25f27c:
    if (ctx->pc == 0x25F27Cu) {
        ctx->pc = 0x25F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F278u;
        // 0x25f27c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F280u;
        goto label_25f280;
    }
    ctx->pc = 0x25F278u;
    SET_GPR_U32(ctx, 31, 0x25F280u);
    ctx->pc = 0x25F27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F278u;
    // 0x25f27c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25F278u, 0x25F280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F280u;
label_25f280:
    // 0x25f280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f284:
    // 0x25f284: 0xc089990  jal         func_226640
label_25f288:
    if (ctx->pc == 0x25F288u) {
        ctx->pc = 0x25F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F284u;
        // 0x25f288: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F28Cu;
        goto label_25f28c;
    }
    ctx->pc = 0x25F284u;
    SET_GPR_U32(ctx, 31, 0x25F28Cu);
    ctx->pc = 0x25F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F284u;
    // 0x25f288: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25F284u, 0x25F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F28Cu;
label_25f28c:
    // 0x25f28c: 0xc08a062  jal         func_228188
label_25f290:
    if (ctx->pc == 0x25F290u) {
        ctx->pc = 0x25F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F28Cu;
        // 0x25f290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F294u;
        goto label_25f294;
    }
    ctx->pc = 0x25F28Cu;
    SET_GPR_U32(ctx, 31, 0x25F294u);
    ctx->pc = 0x25F290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F28Cu;
    // 0x25f290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228188u, 0x25F28Cu, 0x25F294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F294u;
label_25f294:
    // 0x25f294: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_25f298:
    if (ctx->pc == 0x25F298u) {
        ctx->pc = 0x25F29Cu;
        goto label_25f29c;
    }
    ctx->pc = 0x25F294u;
    {
        const bool branch_taken_0x25f294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f294) {
            ctx->pc = 0x25F358u;
            goto label_25f358;
        }
    }
    ctx->pc = 0x25F29Cu;
label_25f29c:
    // 0x25f29c: 0xc089000  jal         func_224000
label_25f2a0:
    if (ctx->pc == 0x25F2A0u) {
        ctx->pc = 0x25F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F29Cu;
        // 0x25f2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F2A4u;
        goto label_25f2a4;
    }
    ctx->pc = 0x25F29Cu;
    SET_GPR_U32(ctx, 31, 0x25F2A4u);
    ctx->pc = 0x25F2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F29Cu;
    // 0x25f2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x25F29Cu, 0x25F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2A4u;
label_25f2a4:
    // 0x25f2a4: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_25f2a8:
    if (ctx->pc == 0x25F2A8u) {
        ctx->pc = 0x25F2ACu;
        goto label_25f2ac;
    }
    ctx->pc = 0x25F2A4u;
    {
        const bool branch_taken_0x25f2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f2a4) {
            ctx->pc = 0x25F358u;
            goto label_25f358;
        }
    }
    ctx->pc = 0x25F2ACu;
label_25f2ac:
    // 0x25f2ac: 0xc0899ae  jal         func_2266B8
label_25f2b0:
    if (ctx->pc == 0x25F2B0u) {
        ctx->pc = 0x25F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2ACu;
        // 0x25f2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F2B4u;
        goto label_25f2b4;
    }
    ctx->pc = 0x25F2ACu;
    SET_GPR_U32(ctx, 31, 0x25F2B4u);
    ctx->pc = 0x25F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2ACu;
    // 0x25f2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25F2ACu, 0x25F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2B4u;
label_25f2b4:
    // 0x25f2b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f2b8:
    // 0x25f2b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f2bc:
    // 0x25f2bc: 0x24050276  addiu       $a1, $zero, 0x276
    ctx->pc = 0x25f2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
label_25f2c0:
    // 0x25f2c0: 0xc0886a8  jal         func_221AA0
label_25f2c4:
    if (ctx->pc == 0x25F2C4u) {
        ctx->pc = 0x25F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2C0u;
        // 0x25f2c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F2C8u;
        goto label_25f2c8;
    }
    ctx->pc = 0x25F2C0u;
    SET_GPR_U32(ctx, 31, 0x25F2C8u);
    ctx->pc = 0x25F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2C0u;
    // 0x25f2c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x25F2C0u, 0x25F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2C8u;
label_25f2c8:
    // 0x25f2c8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_25f2cc:
    if (ctx->pc == 0x25F2CCu) {
        ctx->pc = 0x25F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2C8u;
        // 0x25f2cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F2D0u;
        goto label_25f2d0;
    }
    ctx->pc = 0x25F2C8u;
    {
        const bool branch_taken_0x25f2c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2C8u;
        // 0x25f2cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2c8) {
            ctx->pc = 0x25F2E4u;
            goto label_25f2e4;
        }
    }
    ctx->pc = 0x25F2D0u;
label_25f2d0:
    // 0x25f2d0: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25f2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25f2d4:
    // 0x25f2d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25f2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25f2d8:
    // 0x25f2d8: 0x24060276  addiu       $a2, $zero, 0x276
    ctx->pc = 0x25f2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
label_25f2dc:
    // 0x25f2dc: 0xc042c24  jal         func_10B090
label_25f2e0:
    if (ctx->pc == 0x25F2E0u) {
        ctx->pc = 0x25F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2DCu;
        // 0x25f2e0: 0x2407027b  addiu       $a3, $zero, 0x27B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F2E4u;
        goto label_25f2e4;
    }
    ctx->pc = 0x25F2DCu;
    SET_GPR_U32(ctx, 31, 0x25F2E4u);
    ctx->pc = 0x25F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2DCu;
    // 0x25f2e0: 0x2407027b  addiu       $a3, $zero, 0x27B (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B090u, 0x25F2DCu, 0x25F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2E4u;
label_25f2e4:
    // 0x25f2e4: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25f2e8:
    // 0x25f2e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25f2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25f2ec:
    // 0x25f2ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f2f0:
    // 0x25f2f0: 0xc05d53a  jal         func_1754E8
label_25f2f4:
    if (ctx->pc == 0x25F2F4u) {
        ctx->pc = 0x25F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2F0u;
        // 0x25f2f4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F2F8u;
        goto label_25f2f8;
    }
    ctx->pc = 0x25F2F0u;
    SET_GPR_U32(ctx, 31, 0x25F2F8u);
    ctx->pc = 0x25F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2F0u;
    // 0x25f2f4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25F2F0u, 0x25F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2F8u;
label_25f2f8:
    // 0x25f2f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f2fc:
    // 0x25f2fc: 0xc05d4f6  jal         func_1753D8
label_25f300:
    if (ctx->pc == 0x25F300u) {
        ctx->pc = 0x25F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2FCu;
        // 0x25f300: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F304u;
        goto label_25f304;
    }
    ctx->pc = 0x25F2FCu;
    SET_GPR_U32(ctx, 31, 0x25F304u);
    ctx->pc = 0x25F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2FCu;
    // 0x25f300: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25F2FCu, 0x25F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F304u;
label_25f304:
    // 0x25f304: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x25f304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_25f308:
    // 0x25f308: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x25f308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_25f30c:
    // 0x25f30c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_25f310:
    if (ctx->pc == 0x25F310u) {
        ctx->pc = 0x25F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F30Cu;
        // 0x25f310: 0x24020279  addiu       $v0, $zero, 0x279 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F314u;
        goto label_25f314;
    }
    ctx->pc = 0x25F30Cu;
    {
        const bool branch_taken_0x25f30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F30Cu;
        // 0x25f310: 0x24020279  addiu       $v0, $zero, 0x279 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f30c) {
            ctx->pc = 0x25F344u;
            goto label_25f344;
        }
    }
    ctx->pc = 0x25F314u;
label_25f314:
    // 0x25f314: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_25f318:
    if (ctx->pc == 0x25F318u) {
        ctx->pc = 0x25F31Cu;
        goto label_25f31c;
    }
    ctx->pc = 0x25F314u;
    {
        const bool branch_taken_0x25f314 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f314) {
            ctx->pc = 0x25F344u;
            goto label_25f344;
        }
    }
    ctx->pc = 0x25F31Cu;
label_25f31c:
    // 0x25f31c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x25f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25f320:
    // 0x25f320: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x25f320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_25f324:
    // 0x25f324: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x25f324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_25f328:
    // 0x25f328: 0x60f809  jalr        $v1
label_25f32c:
    if (ctx->pc == 0x25F32Cu) {
        ctx->pc = 0x25F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F328u;
        // 0x25f32c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F330u;
        goto label_25f330;
    }
    ctx->pc = 0x25F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25F330u);
        ctx->pc = 0x25F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F328u;
        // 0x25f32c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F328u, 0x25F330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F330u;
label_25f330:
    // 0x25f330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f334:
    // 0x25f334: 0xc097ac0  jal         func_25EB00
label_25f338:
    if (ctx->pc == 0x25F338u) {
        ctx->pc = 0x25F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F334u;
        // 0x25f338: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F33Cu;
        goto label_25f33c;
    }
    ctx->pc = 0x25F334u;
    SET_GPR_U32(ctx, 31, 0x25F33Cu);
    ctx->pc = 0x25F338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F334u;
    // 0x25f338: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EB00u, 0x25F334u, 0x25F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F33Cu;
label_25f33c:
    // 0x25f33c: 0x10000039  b           . + 4 + (0x39 << 2)
label_25f340:
    if (ctx->pc == 0x25F340u) {
        ctx->pc = 0x25F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F33Cu;
        // 0x25f340: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F344u;
        goto label_25f344;
    }
    ctx->pc = 0x25F33Cu;
    {
        const bool branch_taken_0x25f33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F33Cu;
        // 0x25f340: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f33c) {
            ctx->pc = 0x25F424u;
            goto label_25f424;
        }
    }
    ctx->pc = 0x25F344u;
label_25f344:
    // 0x25f344: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25f344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25f348:
    // 0x25f348: 0xc097ac0  jal         func_25EB00
label_25f34c:
    if (ctx->pc == 0x25F34Cu) {
        ctx->pc = 0x25F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F348u;
        // 0x25f34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F350u;
        goto label_25f350;
    }
    ctx->pc = 0x25F348u;
    SET_GPR_U32(ctx, 31, 0x25F350u);
    ctx->pc = 0x25F34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F348u;
    // 0x25f34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EB00u, 0x25F348u, 0x25F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F350u;
label_25f350:
    // 0x25f350: 0x10000034  b           . + 4 + (0x34 << 2)
label_25f354:
    if (ctx->pc == 0x25F354u) {
        ctx->pc = 0x25F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F350u;
        // 0x25f354: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F358u;
        goto label_25f358;
    }
    ctx->pc = 0x25F350u;
    {
        const bool branch_taken_0x25f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F350u;
        // 0x25f354: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f350) {
            ctx->pc = 0x25F424u;
            goto label_25f424;
        }
    }
    ctx->pc = 0x25F358u;
label_25f358:
    // 0x25f358: 0xc08a05a  jal         func_228168
label_25f35c:
    if (ctx->pc == 0x25F35Cu) {
        ctx->pc = 0x25F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F358u;
        // 0x25f35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F360u;
        goto label_25f360;
    }
    ctx->pc = 0x25F358u;
    SET_GPR_U32(ctx, 31, 0x25F360u);
    ctx->pc = 0x25F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F358u;
    // 0x25f35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x25F358u, 0x25F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F360u;
label_25f360:
    // 0x25f360: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_25f364:
    if (ctx->pc == 0x25F364u) {
        ctx->pc = 0x25F368u;
        goto label_25f368;
    }
    ctx->pc = 0x25F360u;
    {
        const bool branch_taken_0x25f360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f360) {
            ctx->pc = 0x25F3E8u;
            goto label_25f3e8;
        }
    }
    ctx->pc = 0x25F368u;
label_25f368:
    // 0x25f368: 0xc0874fa  jal         func_21D3E8
label_25f36c:
    if (ctx->pc == 0x25F36Cu) {
        ctx->pc = 0x25F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F368u;
        // 0x25f36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F370u;
        goto label_25f370;
    }
    ctx->pc = 0x25F368u;
    SET_GPR_U32(ctx, 31, 0x25F370u);
    ctx->pc = 0x25F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F368u;
    // 0x25f36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25F368u, 0x25F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F370u;
label_25f370:
    // 0x25f370: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25f370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25f374:
    // 0x25f374: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_25f378:
    if (ctx->pc == 0x25F378u) {
        ctx->pc = 0x25F37Cu;
        goto label_25f37c;
    }
    ctx->pc = 0x25F374u;
    {
        const bool branch_taken_0x25f374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f374) {
            ctx->pc = 0x25F3E8u;
            goto label_25f3e8;
        }
    }
    ctx->pc = 0x25F37Cu;
label_25f37c:
    // 0x25f37c: 0xc088ac6  jal         func_222B18
label_25f380:
    if (ctx->pc == 0x25F380u) {
        ctx->pc = 0x25F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F37Cu;
        // 0x25f380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F384u;
        goto label_25f384;
    }
    ctx->pc = 0x25F37Cu;
    SET_GPR_U32(ctx, 31, 0x25F384u);
    ctx->pc = 0x25F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F37Cu;
    // 0x25f380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x25F37Cu, 0x25F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F384u;
label_25f384:
    // 0x25f384: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x25f384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_25f388:
    // 0x25f388: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x25f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_25f38c:
    // 0x25f38c: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x25f38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_25f390:
    // 0x25f390: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_25f394:
    if (ctx->pc == 0x25F394u) {
        ctx->pc = 0x25F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F390u;
        // 0x25f394: 0xac450054  sw          $a1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F398u;
        goto label_25f398;
    }
    ctx->pc = 0x25F390u;
    {
        const bool branch_taken_0x25f390 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F390u;
        // 0x25f394: 0xac450054  sw          $a1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f390) {
            ctx->pc = 0x25F3C8u;
            goto label_25f3c8;
        }
    }
    ctx->pc = 0x25F398u;
label_25f398:
    // 0x25f398: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25f398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25f39c:
    // 0x25f39c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25f39cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25f3a0:
    // 0x25f3a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25f3a4:
    // 0x25f3a4: 0x40f809  jalr        $v0
label_25f3a8:
    if (ctx->pc == 0x25F3A8u) {
        ctx->pc = 0x25F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3A4u;
        // 0x25f3a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F3ACu;
        goto label_25f3ac;
    }
    ctx->pc = 0x25F3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25F3ACu);
        ctx->pc = 0x25F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3A4u;
        // 0x25f3a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F3A4u, 0x25F3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F3ACu;
label_25f3ac:
    // 0x25f3ac: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x25f3acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
label_25f3b0:
    // 0x25f3b0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x25f3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25f3b4:
    // 0x25f3b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25f3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f3b8:
    // 0x25f3b8: 0x2508a8b8  addiu       $t0, $t0, -0x5748
    ctx->pc = 0x25f3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944952));
label_25f3bc:
    // 0x25f3bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25f3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25f3c0:
    // 0x25f3c0: 0xc04159e  jal         func_105678
label_25f3c4:
    if (ctx->pc == 0x25F3C4u) {
        ctx->pc = 0x25F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3C0u;
        // 0x25f3c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F3C8u;
        goto label_25f3c8;
    }
    ctx->pc = 0x25F3C0u;
    SET_GPR_U32(ctx, 31, 0x25F3C8u);
    ctx->pc = 0x25F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3C0u;
    // 0x25f3c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25F3C0u, 0x25F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3C8u;
label_25f3c8:
    // 0x25f3c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25f3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25f3cc:
    // 0x25f3cc: 0xc05d53a  jal         func_1754E8
label_25f3d0:
    if (ctx->pc == 0x25F3D0u) {
        ctx->pc = 0x25F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3CCu;
        // 0x25f3d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F3D4u;
        goto label_25f3d4;
    }
    ctx->pc = 0x25F3CCu;
    SET_GPR_U32(ctx, 31, 0x25F3D4u);
    ctx->pc = 0x25F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3CCu;
    // 0x25f3d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25F3CCu, 0x25F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3D4u;
label_25f3d4:
    // 0x25f3d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f3d8:
    // 0x25f3d8: 0xc05d4f6  jal         func_1753D8
label_25f3dc:
    if (ctx->pc == 0x25F3DCu) {
        ctx->pc = 0x25F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3D8u;
        // 0x25f3dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F3E0u;
        goto label_25f3e0;
    }
    ctx->pc = 0x25F3D8u;
    SET_GPR_U32(ctx, 31, 0x25F3E0u);
    ctx->pc = 0x25F3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F3D8u;
    // 0x25f3dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25F3D8u, 0x25F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F3E0u;
label_25f3e0:
    // 0x25f3e0: 0x10000010  b           . + 4 + (0x10 << 2)
label_25f3e4:
    if (ctx->pc == 0x25F3E4u) {
        ctx->pc = 0x25F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3E0u;
        // 0x25f3e4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F3E8u;
        goto label_25f3e8;
    }
    ctx->pc = 0x25F3E0u;
    {
        const bool branch_taken_0x25f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3E0u;
        // 0x25f3e4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3e0) {
            ctx->pc = 0x25F424u;
            goto label_25f424;
        }
    }
    ctx->pc = 0x25F3E8u;
label_25f3e8:
    // 0x25f3e8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_25f3ec:
    if (ctx->pc == 0x25F3ECu) {
        ctx->pc = 0x25F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3E8u;
        // 0x25f3ec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F3F0u;
        goto label_25f3f0;
    }
    ctx->pc = 0x25F3E8u;
    {
        const bool branch_taken_0x25f3e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3E8u;
        // 0x25f3ec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3e8) {
            ctx->pc = 0x25F408u;
            goto label_25f408;
        }
    }
    ctx->pc = 0x25F3F0u;
label_25f3f0:
    // 0x25f3f0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x25f3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25f3f4:
    // 0x25f3f4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25f3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25f3f8:
    // 0x25f3f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25f3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25f3fc:
    // 0x25f3fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25f3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f400:
    // 0x25f400: 0xc04159e  jal         func_105678
label_25f404:
    if (ctx->pc == 0x25F404u) {
        ctx->pc = 0x25F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F400u;
        // 0x25f404: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F408u;
        goto label_25f408;
    }
    ctx->pc = 0x25F400u;
    SET_GPR_U32(ctx, 31, 0x25F408u);
    ctx->pc = 0x25F404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F400u;
    // 0x25f404: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25F400u, 0x25F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F408u;
label_25f408:
    // 0x25f408: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25f408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25f40c:
    // 0x25f40c: 0xc05d53a  jal         func_1754E8
label_25f410:
    if (ctx->pc == 0x25F410u) {
        ctx->pc = 0x25F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F40Cu;
        // 0x25f410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F414u;
        goto label_25f414;
    }
    ctx->pc = 0x25F40Cu;
    SET_GPR_U32(ctx, 31, 0x25F414u);
    ctx->pc = 0x25F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F40Cu;
    // 0x25f410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25F40Cu, 0x25F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F414u;
label_25f414:
    // 0x25f414: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f418:
    // 0x25f418: 0xc05d4f6  jal         func_1753D8
label_25f41c:
    if (ctx->pc == 0x25F41Cu) {
        ctx->pc = 0x25F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F418u;
        // 0x25f41c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F420u;
        goto label_25f420;
    }
    ctx->pc = 0x25F418u;
    SET_GPR_U32(ctx, 31, 0x25F420u);
    ctx->pc = 0x25F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F418u;
    // 0x25f41c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25F418u, 0x25F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F420u;
label_25f420:
    // 0x25f420: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x25f420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25f424:
    // 0x25f424: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x25f424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25f428:
    // 0x25f428: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x25f428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25f42c:
    // 0x25f42c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x25f42cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25f430:
    // 0x25f430: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25f430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25f434:
    // 0x25f434: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x25f434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25f438:
    // 0x25f438: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x25f438u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25f43c:
    // 0x25f43c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x25f43cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25f440:
    // 0x25f440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f444:
    // 0x25f444: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x25f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25f448:
    // 0x25f448: 0x3e00008  jr          $ra
label_25f44c:
    if (ctx->pc == 0x25F44Cu) {
        ctx->pc = 0x25F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F448u;
        // 0x25f44c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F450u;
        goto label_fallthrough_0x25f448;
    }
    ctx->pc = 0x25F448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F448u;
        // 0x25f44c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25f448:
    ctx->pc = 0x25F450u;
}
