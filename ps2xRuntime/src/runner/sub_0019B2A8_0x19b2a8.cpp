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

// Function: sub_0019B2A8
// Address: 0x19b2a8 - 0x19b4c0
void sub_0019B2A8_0x19b2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B2A8_0x19b2a8");
#endif

    switch (ctx->pc) {
        case 0x19b2a8u: goto label_19b2a8;
        case 0x19b2acu: goto label_19b2ac;
        case 0x19b2b0u: goto label_19b2b0;
        case 0x19b2b4u: goto label_19b2b4;
        case 0x19b2b8u: goto label_19b2b8;
        case 0x19b2bcu: goto label_19b2bc;
        case 0x19b2c0u: goto label_19b2c0;
        case 0x19b2c4u: goto label_19b2c4;
        case 0x19b2c8u: goto label_19b2c8;
        case 0x19b2ccu: goto label_19b2cc;
        case 0x19b2d0u: goto label_19b2d0;
        case 0x19b2d4u: goto label_19b2d4;
        case 0x19b2d8u: goto label_19b2d8;
        case 0x19b2dcu: goto label_19b2dc;
        case 0x19b2e0u: goto label_19b2e0;
        case 0x19b2e4u: goto label_19b2e4;
        case 0x19b2e8u: goto label_19b2e8;
        case 0x19b2ecu: goto label_19b2ec;
        case 0x19b2f0u: goto label_19b2f0;
        case 0x19b2f4u: goto label_19b2f4;
        case 0x19b2f8u: goto label_19b2f8;
        case 0x19b2fcu: goto label_19b2fc;
        case 0x19b300u: goto label_19b300;
        case 0x19b304u: goto label_19b304;
        case 0x19b308u: goto label_19b308;
        case 0x19b30cu: goto label_19b30c;
        case 0x19b310u: goto label_19b310;
        case 0x19b314u: goto label_19b314;
        case 0x19b318u: goto label_19b318;
        case 0x19b31cu: goto label_19b31c;
        case 0x19b320u: goto label_19b320;
        case 0x19b324u: goto label_19b324;
        case 0x19b328u: goto label_19b328;
        case 0x19b32cu: goto label_19b32c;
        case 0x19b330u: goto label_19b330;
        case 0x19b334u: goto label_19b334;
        case 0x19b338u: goto label_19b338;
        case 0x19b33cu: goto label_19b33c;
        case 0x19b340u: goto label_19b340;
        case 0x19b344u: goto label_19b344;
        case 0x19b348u: goto label_19b348;
        case 0x19b34cu: goto label_19b34c;
        case 0x19b350u: goto label_19b350;
        case 0x19b354u: goto label_19b354;
        case 0x19b358u: goto label_19b358;
        case 0x19b35cu: goto label_19b35c;
        case 0x19b360u: goto label_19b360;
        case 0x19b364u: goto label_19b364;
        case 0x19b368u: goto label_19b368;
        case 0x19b36cu: goto label_19b36c;
        case 0x19b370u: goto label_19b370;
        case 0x19b374u: goto label_19b374;
        case 0x19b378u: goto label_19b378;
        case 0x19b37cu: goto label_19b37c;
        case 0x19b380u: goto label_19b380;
        case 0x19b384u: goto label_19b384;
        case 0x19b388u: goto label_19b388;
        case 0x19b38cu: goto label_19b38c;
        case 0x19b390u: goto label_19b390;
        case 0x19b394u: goto label_19b394;
        case 0x19b398u: goto label_19b398;
        case 0x19b39cu: goto label_19b39c;
        case 0x19b3a0u: goto label_19b3a0;
        case 0x19b3a4u: goto label_19b3a4;
        case 0x19b3a8u: goto label_19b3a8;
        case 0x19b3acu: goto label_19b3ac;
        case 0x19b3b0u: goto label_19b3b0;
        case 0x19b3b4u: goto label_19b3b4;
        case 0x19b3b8u: goto label_19b3b8;
        case 0x19b3bcu: goto label_19b3bc;
        case 0x19b3c0u: goto label_19b3c0;
        case 0x19b3c4u: goto label_19b3c4;
        case 0x19b3c8u: goto label_19b3c8;
        case 0x19b3ccu: goto label_19b3cc;
        case 0x19b3d0u: goto label_19b3d0;
        case 0x19b3d4u: goto label_19b3d4;
        case 0x19b3d8u: goto label_19b3d8;
        case 0x19b3dcu: goto label_19b3dc;
        case 0x19b3e0u: goto label_19b3e0;
        case 0x19b3e4u: goto label_19b3e4;
        case 0x19b3e8u: goto label_19b3e8;
        case 0x19b3ecu: goto label_19b3ec;
        case 0x19b3f0u: goto label_19b3f0;
        case 0x19b3f4u: goto label_19b3f4;
        case 0x19b3f8u: goto label_19b3f8;
        case 0x19b3fcu: goto label_19b3fc;
        case 0x19b400u: goto label_19b400;
        case 0x19b404u: goto label_19b404;
        case 0x19b408u: goto label_19b408;
        case 0x19b40cu: goto label_19b40c;
        case 0x19b410u: goto label_19b410;
        case 0x19b414u: goto label_19b414;
        case 0x19b418u: goto label_19b418;
        case 0x19b41cu: goto label_19b41c;
        case 0x19b420u: goto label_19b420;
        case 0x19b424u: goto label_19b424;
        case 0x19b428u: goto label_19b428;
        case 0x19b42cu: goto label_19b42c;
        case 0x19b430u: goto label_19b430;
        case 0x19b434u: goto label_19b434;
        case 0x19b438u: goto label_19b438;
        case 0x19b43cu: goto label_19b43c;
        case 0x19b440u: goto label_19b440;
        case 0x19b444u: goto label_19b444;
        case 0x19b448u: goto label_19b448;
        case 0x19b44cu: goto label_19b44c;
        case 0x19b450u: goto label_19b450;
        case 0x19b454u: goto label_19b454;
        case 0x19b458u: goto label_19b458;
        case 0x19b45cu: goto label_19b45c;
        case 0x19b460u: goto label_19b460;
        case 0x19b464u: goto label_19b464;
        case 0x19b468u: goto label_19b468;
        case 0x19b46cu: goto label_19b46c;
        case 0x19b470u: goto label_19b470;
        case 0x19b474u: goto label_19b474;
        case 0x19b478u: goto label_19b478;
        case 0x19b47cu: goto label_19b47c;
        case 0x19b480u: goto label_19b480;
        case 0x19b484u: goto label_19b484;
        case 0x19b488u: goto label_19b488;
        case 0x19b48cu: goto label_19b48c;
        case 0x19b490u: goto label_19b490;
        case 0x19b494u: goto label_19b494;
        case 0x19b498u: goto label_19b498;
        case 0x19b49cu: goto label_19b49c;
        case 0x19b4a0u: goto label_19b4a0;
        case 0x19b4a4u: goto label_19b4a4;
        case 0x19b4a8u: goto label_19b4a8;
        case 0x19b4acu: goto label_19b4ac;
        case 0x19b4b0u: goto label_19b4b0;
        case 0x19b4b4u: goto label_19b4b4;
        case 0x19b4b8u: goto label_19b4b8;
        case 0x19b4bcu: goto label_19b4bc;
        default: break;
    }

    ctx->pc = 0x19b2a8u;

label_19b2a8:
    // 0x19b2a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19b2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19b2ac:
    // 0x19b2ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19b2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_19b2b0:
    // 0x19b2b0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x19b2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_19b2b4:
    // 0x19b2b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19b2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19b2b8:
    // 0x19b2b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19b2bc:
    // 0x19b2bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19b2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b2c0:
    // 0x19b2c0: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x19b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_19b2c4:
    // 0x19b2c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b2c8:
    // 0x19b2c8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19b2c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_19b2cc:
    // 0x19b2cc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x19b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19b2d0:
    // 0x19b2d0: 0x40f809  jalr        $v0
label_19b2d4:
    if (ctx->pc == 0x19B2D4u) {
        ctx->pc = 0x19B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2D0u;
        // 0x19b2d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B2D8u;
        goto label_19b2d8;
    }
    ctx->pc = 0x19B2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19B2D8u);
        ctx->pc = 0x19B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2D0u;
        // 0x19b2d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B2D0u, 0x19B2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B2D8u;
label_19b2d8:
    // 0x19b2d8: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x19b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_19b2dc:
    // 0x19b2dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19b2e0:
    // 0x19b2e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19b2e4:
    if (ctx->pc == 0x19B2E4u) {
        ctx->pc = 0x19B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2E0u;
        // 0x19b2e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B2E8u;
        goto label_19b2e8;
    }
    ctx->pc = 0x19B2E0u;
    {
        const bool branch_taken_0x19b2e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2E0u;
        // 0x19b2e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2e0) {
            ctx->pc = 0x19B2FCu;
            goto label_19b2fc;
        }
    }
    ctx->pc = 0x19B2E8u;
label_19b2e8:
    // 0x19b2e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b2ec:
    // 0x19b2ec: 0x0  nop
    ctx->pc = 0x19b2ecu;
    // NOP
label_19b2f0:
    // 0x19b2f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b2f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19b2f4:
    // 0x19b2f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_19b2f8:
    if (ctx->pc == 0x19B2F8u) {
        ctx->pc = 0x19B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2F4u;
        // 0x19b2f8: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B2FCu;
        goto label_19b2fc;
    }
    ctx->pc = 0x19B2F4u;
    {
        const bool branch_taken_0x19b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2F4u;
        // 0x19b2f8: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2f4) {
            ctx->pc = 0x19B318u;
            goto label_19b318;
        }
    }
    ctx->pc = 0x19B2FCu;
label_19b2fc:
    // 0x19b2fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19b300:
    // 0x19b300: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19b300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19b304:
    // 0x19b304: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b308:
    // 0x19b308: 0x0  nop
    ctx->pc = 0x19b308u;
    // NOP
label_19b30c:
    // 0x19b30c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19b310:
    // 0x19b310: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19b310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19b314:
    // 0x19b314: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x19b314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_19b318:
    // 0x19b318: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19b31c:
    if (ctx->pc == 0x19B31Cu) {
        ctx->pc = 0x19B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B318u;
        // 0x19b31c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B320u;
        goto label_19b320;
    }
    ctx->pc = 0x19B318u;
    {
        const bool branch_taken_0x19b318 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B318u;
        // 0x19b31c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b318) {
            ctx->pc = 0x19B334u;
            goto label_19b334;
        }
    }
    ctx->pc = 0x19B320u;
label_19b320:
    // 0x19b320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b324:
    // 0x19b324: 0x0  nop
    ctx->pc = 0x19b324u;
    // NOP
label_19b328:
    // 0x19b328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b32c:
    // 0x19b32c: 0x10000007  b           . + 4 + (0x7 << 2)
label_19b330:
    if (ctx->pc == 0x19B330u) {
        ctx->pc = 0x19B334u;
        goto label_19b334;
    }
    ctx->pc = 0x19B32Cu;
    {
        const bool branch_taken_0x19b32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b32c) {
            ctx->pc = 0x19B34Cu;
            goto label_19b34c;
        }
    }
    ctx->pc = 0x19B334u;
label_19b334:
    // 0x19b334: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19b338:
    // 0x19b338: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19b338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19b33c:
    // 0x19b33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b340:
    // 0x19b340: 0x0  nop
    ctx->pc = 0x19b340u;
    // NOP
label_19b344:
    // 0x19b344: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b348:
    // 0x19b348: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19b348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19b34c:
    // 0x19b34c: 0x0  nop
    ctx->pc = 0x19b34cu;
    // NOP
label_19b350:
    // 0x19b350: 0x0  nop
    ctx->pc = 0x19b350u;
    // NOP
label_19b354:
    // 0x19b354: 0x46000a83  div.s       $f10, $f1, $f0
    ctx->pc = 0x19b354u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19b358:
    // 0x19b358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19b358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19b35c:
    // 0x19b35c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b360:
    // 0x19b360: 0x0  nop
    ctx->pc = 0x19b360u;
    // NOP
label_19b364:
    // 0x19b364: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x19b364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b368:
    // 0x19b368: 0x0  nop
    ctx->pc = 0x19b368u;
    // NOP
label_19b36c:
    // 0x19b36c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19b370:
    if (ctx->pc == 0x19B370u) {
        ctx->pc = 0x19B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B36Cu;
        // 0x19b370: 0x46000286  mov.s       $f10, $f0 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B374u;
        goto label_19b374;
    }
    ctx->pc = 0x19B36Cu;
    {
        const bool branch_taken_0x19b36c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b36c) {
            ctx->pc = 0x19B370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B36Cu;
            // 0x19b370: 0x46000286  mov.s       $f10, $f0 (Delay Slot)
            ctx->f[10] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B374u;
            goto label_19b374;
        }
    }
    ctx->pc = 0x19B374u;
label_19b374:
    // 0x19b374: 0x922300d4  lbu         $v1, 0xD4($s1)
    ctx->pc = 0x19b374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 212)));
label_19b378:
    // 0x19b378: 0x460a01c1  sub.s       $f7, $f0, $f10
    ctx->pc = 0x19b378u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
label_19b37c:
    // 0x19b37c: 0x922200b4  lbu         $v0, 0xB4($s1)
    ctx->pc = 0x19b37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 180)));
label_19b380:
    // 0x19b380: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x19b380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b384:
    // 0x19b384: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19b384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b388:
    // 0x19b388: 0x0  nop
    ctx->pc = 0x19b388u;
    // NOP
label_19b38c:
    // 0x19b38c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b38cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19b390:
    // 0x19b390: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19b390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19b394:
    // 0x19b394: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x19b394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_19b398:
    // 0x19b398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b39c:
    // 0x19b39c: 0x0  nop
    ctx->pc = 0x19b39cu;
    // NOP
label_19b3a0:
    // 0x19b3a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b3a4:
    // 0x19b3a4: 0xc62600a8  lwc1        $f6, 0xA8($s1)
    ctx->pc = 0x19b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_19b3a8:
    // 0x19b3a8: 0xc62800c8  lwc1        $f8, 0xC8($s1)
    ctx->pc = 0x19b3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_19b3ac:
    // 0x19b3ac: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x19b3acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_19b3b0:
    // 0x19b3b0: 0xc62400ac  lwc1        $f4, 0xAC($s1)
    ctx->pc = 0x19b3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19b3b4:
    // 0x19b3b4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x19b3b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_19b3b8:
    // 0x19b3b8: 0xc62500cc  lwc1        $f5, 0xCC($s1)
    ctx->pc = 0x19b3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19b3bc:
    // 0x19b3bc: 0xc62200b0  lwc1        $f2, 0xB0($s1)
    ctx->pc = 0x19b3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19b3c0:
    // 0x19b3c0: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x19b3c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
label_19b3c4:
    // 0x19b3c4: 0xc62300d0  lwc1        $f3, 0xD0($s1)
    ctx->pc = 0x19b3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19b3c8:
    // 0x19b3c8: 0x460a4202  mul.s       $f8, $f8, $f10
    ctx->pc = 0x19b3c8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
label_19b3cc:
    // 0x19b3cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19b3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19b3d0:
    // 0x19b3d0: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x19b3d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_19b3d4:
    // 0x19b3d4: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x19b3d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
label_19b3d8:
    // 0x19b3d8: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x19b3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
label_19b3dc:
    // 0x19b3dc: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x19b3dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_19b3e0:
    // 0x19b3e0: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x19b3e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
label_19b3e4:
    // 0x19b3e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b3e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_19b3e8:
    // 0x19b3e8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x19b3e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_19b3ec:
    // 0x19b3ec: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x19b3ecu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
label_19b3f0:
    // 0x19b3f0: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x19b3f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_19b3f4:
    // 0x19b3f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b3f8:
    // 0x19b3f8: 0x0  nop
    ctx->pc = 0x19b3f8u;
    // NOP
label_19b3fc:
    // 0x19b3fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b3fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b400:
    // 0x19b400: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x19b400u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_19b404:
    // 0x19b404: 0xe62600b8  swc1        $f6, 0xB8($s1)
    ctx->pc = 0x19b404u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
label_19b408:
    // 0x19b408: 0xe62400bc  swc1        $f4, 0xBC($s1)
    ctx->pc = 0x19b408u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_19b40c:
    // 0x19b40c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b40cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_19b410:
    // 0x19b410: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x19b410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_19b414:
    // 0x19b414: 0xe62200c0  swc1        $f2, 0xC0($s1)
    ctx->pc = 0x19b414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_19b418:
    // 0x19b418: 0xa222009f  sb          $v0, 0x9F($s1)
    ctx->pc = 0x19b418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 159), (uint8_t)GPR_U32(ctx, 2));
label_19b41c:
    // 0x19b41c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_19b420:
    if (ctx->pc == 0x19B420u) {
        ctx->pc = 0x19B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B41Cu;
        // 0x19b420: 0xa22200c4  sb          $v0, 0xC4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B424u;
        goto label_19b424;
    }
    ctx->pc = 0x19B41Cu;
    {
        const bool branch_taken_0x19b41c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B41Cu;
        // 0x19b420: 0xa22200c4  sb          $v0, 0xC4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b41c) {
            ctx->pc = 0x19B4ACu;
            goto label_19b4ac;
        }
    }
    ctx->pc = 0x19B424u;
label_19b424:
    // 0x19b424: 0x6a2200cf  ldl         $v0, 0xCF($s1)
    ctx->pc = 0x19b424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19b428:
    // 0x19b428: 0x6e2200c8  ldr         $v0, 0xC8($s1)
    ctx->pc = 0x19b428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19b42c:
    // 0x19b42c: 0x6a2300d7  ldl         $v1, 0xD7($s1)
    ctx->pc = 0x19b42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19b430:
    // 0x19b430: 0x6e2300d0  ldr         $v1, 0xD0($s1)
    ctx->pc = 0x19b430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19b434:
    // 0x19b434: 0xb22200af  sdl         $v0, 0xAF($s1)
    ctx->pc = 0x19b434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b438:
    // 0x19b438: 0xb62200a8  sdr         $v0, 0xA8($s1)
    ctx->pc = 0x19b438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b43c:
    // 0x19b43c: 0xb22300b7  sdl         $v1, 0xB7($s1)
    ctx->pc = 0x19b43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b440:
    // 0x19b440: 0xb62300b0  sdr         $v1, 0xB0($s1)
    ctx->pc = 0x19b440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b444:
    // 0x19b444: 0x6a2200cf  ldl         $v0, 0xCF($s1)
    ctx->pc = 0x19b444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19b448:
    // 0x19b448: 0x6e2200c8  ldr         $v0, 0xC8($s1)
    ctx->pc = 0x19b448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19b44c:
    // 0x19b44c: 0x6a2300d7  ldl         $v1, 0xD7($s1)
    ctx->pc = 0x19b44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19b450:
    // 0x19b450: 0x6e2300d0  ldr         $v1, 0xD0($s1)
    ctx->pc = 0x19b450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19b454:
    // 0x19b454: 0xb22200bf  sdl         $v0, 0xBF($s1)
    ctx->pc = 0x19b454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b458:
    // 0x19b458: 0xb62200b8  sdr         $v0, 0xB8($s1)
    ctx->pc = 0x19b458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b45c:
    // 0x19b45c: 0xb22300c7  sdl         $v1, 0xC7($s1)
    ctx->pc = 0x19b45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b460:
    // 0x19b460: 0xb62300c0  sdr         $v1, 0xC0($s1)
    ctx->pc = 0x19b460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b464:
    // 0x19b464: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x19b464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_19b468:
    // 0x19b468: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19b468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b46c:
    // 0x19b46c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19b46cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_19b470:
    // 0x19b470: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x19b470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19b474:
    // 0x19b474: 0x40f809  jalr        $v0
label_19b478:
    if (ctx->pc == 0x19B478u) {
        ctx->pc = 0x19B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B474u;
        // 0x19b478: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B47Cu;
        goto label_19b47c;
    }
    ctx->pc = 0x19B474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19B47Cu);
        ctx->pc = 0x19B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B474u;
        // 0x19b478: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B474u, 0x19B47Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B47Cu;
label_19b47c:
    // 0x19b47c: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x19b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_19b480:
    // 0x19b480: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19b480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19b484:
    // 0x19b484: 0xc066c66  jal         func_19B198
label_19b488:
    if (ctx->pc == 0x19B488u) {
        ctx->pc = 0x19B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B484u;
        // 0x19b488: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B48Cu;
        goto label_19b48c;
    }
    ctx->pc = 0x19B484u;
    SET_GPR_U32(ctx, 31, 0x19B48Cu);
    ctx->pc = 0x19B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B484u;
    // 0x19b488: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B198u, 0x19B484u, 0x19B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B48Cu;
label_19b48c:
    // 0x19b48c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x19b48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19b490:
    // 0x19b490: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x19b490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19b494:
    // 0x19b494: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x19b494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19b498:
    // 0x19b498: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x19b498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19b49c:
    // 0x19b49c: 0xb22200cf  sdl         $v0, 0xCF($s1)
    ctx->pc = 0x19b49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b4a0:
    // 0x19b4a0: 0xb62200c8  sdr         $v0, 0xC8($s1)
    ctx->pc = 0x19b4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b4a4:
    // 0x19b4a4: 0xb22300d7  sdl         $v1, 0xD7($s1)
    ctx->pc = 0x19b4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b4a8:
    // 0x19b4a8: 0xb62300d0  sdr         $v1, 0xD0($s1)
    ctx->pc = 0x19b4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b4ac:
    // 0x19b4ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19b4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19b4b0:
    // 0x19b4b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19b4b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19b4b4:
    // 0x19b4b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b4b8:
    // 0x19b4b8: 0x3e00008  jr          $ra
label_19b4bc:
    if (ctx->pc == 0x19B4BCu) {
        ctx->pc = 0x19B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4B8u;
        // 0x19b4bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4C0u;
        goto label_fallthrough_0x19b4b8;
    }
    ctx->pc = 0x19B4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4B8u;
        // 0x19b4bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19b4b8:
    ctx->pc = 0x19B4C0u;
}
