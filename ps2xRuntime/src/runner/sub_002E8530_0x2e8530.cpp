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

// Function: sub_002E8530
// Address: 0x2e8530 - 0x2e8610
void sub_002E8530_0x2e8530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8530_0x2e8530");
#endif

    switch (ctx->pc) {
        case 0x2e8530u: goto label_2e8530;
        case 0x2e8534u: goto label_2e8534;
        case 0x2e8538u: goto label_2e8538;
        case 0x2e853cu: goto label_2e853c;
        case 0x2e8540u: goto label_2e8540;
        case 0x2e8544u: goto label_2e8544;
        case 0x2e8548u: goto label_2e8548;
        case 0x2e854cu: goto label_2e854c;
        case 0x2e8550u: goto label_2e8550;
        case 0x2e8554u: goto label_2e8554;
        case 0x2e8558u: goto label_2e8558;
        case 0x2e855cu: goto label_2e855c;
        case 0x2e8560u: goto label_2e8560;
        case 0x2e8564u: goto label_2e8564;
        case 0x2e8568u: goto label_2e8568;
        case 0x2e856cu: goto label_2e856c;
        case 0x2e8570u: goto label_2e8570;
        case 0x2e8574u: goto label_2e8574;
        case 0x2e8578u: goto label_2e8578;
        case 0x2e857cu: goto label_2e857c;
        case 0x2e8580u: goto label_2e8580;
        case 0x2e8584u: goto label_2e8584;
        case 0x2e8588u: goto label_2e8588;
        case 0x2e858cu: goto label_2e858c;
        case 0x2e8590u: goto label_2e8590;
        case 0x2e8594u: goto label_2e8594;
        case 0x2e8598u: goto label_2e8598;
        case 0x2e859cu: goto label_2e859c;
        case 0x2e85a0u: goto label_2e85a0;
        case 0x2e85a4u: goto label_2e85a4;
        case 0x2e85a8u: goto label_2e85a8;
        case 0x2e85acu: goto label_2e85ac;
        case 0x2e85b0u: goto label_2e85b0;
        case 0x2e85b4u: goto label_2e85b4;
        case 0x2e85b8u: goto label_2e85b8;
        case 0x2e85bcu: goto label_2e85bc;
        case 0x2e85c0u: goto label_2e85c0;
        case 0x2e85c4u: goto label_2e85c4;
        case 0x2e85c8u: goto label_2e85c8;
        case 0x2e85ccu: goto label_2e85cc;
        case 0x2e85d0u: goto label_2e85d0;
        case 0x2e85d4u: goto label_2e85d4;
        case 0x2e85d8u: goto label_2e85d8;
        case 0x2e85dcu: goto label_2e85dc;
        case 0x2e85e0u: goto label_2e85e0;
        case 0x2e85e4u: goto label_2e85e4;
        case 0x2e85e8u: goto label_2e85e8;
        case 0x2e85ecu: goto label_2e85ec;
        case 0x2e85f0u: goto label_2e85f0;
        case 0x2e85f4u: goto label_2e85f4;
        case 0x2e85f8u: goto label_2e85f8;
        case 0x2e85fcu: goto label_2e85fc;
        case 0x2e8600u: goto label_2e8600;
        case 0x2e8604u: goto label_2e8604;
        case 0x2e8608u: goto label_2e8608;
        case 0x2e860cu: goto label_2e860c;
        default: break;
    }

    ctx->pc = 0x2e8530u;

label_2e8530:
    // 0x2e8530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e8534:
    // 0x2e8534: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e8534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e8538:
    // 0x2e8538: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e8538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2e853c:
    // 0x2e853c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8540:
    // 0x2e8540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e8544:
    // 0x2e8544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8548:
    // 0x2e8548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e854c:
    // 0x2e854c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8550:
    // 0x2e8550: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2e8550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2e8554:
    // 0x2e8554: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2e8554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2e8558:
    // 0x2e8558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e8558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e855c:
    // 0x2e855c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e8560:
    // 0x2e8560: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2e8560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
label_2e8564:
    // 0x2e8564: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2e8564u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e8568:
    // 0x2e8568: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e8568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e856c:
    // 0x2e856c: 0xa0440265  sb          $a0, 0x265($v0)
    ctx->pc = 0x2e856cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 4));
label_2e8570:
    // 0x2e8570: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e8570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e8574:
    // 0x2e8574: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2e8574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2e8578:
    // 0x2e8578: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e857c:
    // 0x2e857c: 0xc0a22c6  jal         func_288B18
label_2e8580:
    if (ctx->pc == 0x2E8580u) {
        ctx->pc = 0x2E8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E857Cu;
        // 0x2e8580: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8584u;
        goto label_2e8584;
    }
    ctx->pc = 0x2E857Cu;
    SET_GPR_U32(ctx, 31, 0x2E8584u);
    ctx->pc = 0x2E8580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E857Cu;
    // 0x2e8580: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2E857Cu, 0x2E8584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8584u;
label_2e8584:
    // 0x2e8584: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2e8584u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2e8588:
    // 0x2e8588: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x2e8588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_2e858c:
    // 0x2e858c: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x2e858cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
label_2e8590:
    // 0x2e8590: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2e8590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2e8594:
    // 0x2e8594: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x2e8594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2e8598:
    // 0x2e8598: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e8598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e859c:
    // 0x2e859c: 0x2407ff7f  addiu       $a3, $zero, -0x81
    ctx->pc = 0x2e859cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_2e85a0:
    // 0x2e85a0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2e85a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2e85a4:
    // 0x2e85a4: 0x2408ffbf  addiu       $t0, $zero, -0x41
    ctx->pc = 0x2e85a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_2e85a8:
    // 0x2e85a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2e85a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2e85ac:
    // 0x2e85ac: 0x2406fdff  addiu       $a2, $zero, -0x201
    ctx->pc = 0x2e85acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2e85b0:
    // 0x2e85b0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2e85b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2e85b4:
    // 0x2e85b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e85b8:
    // 0x2e85b8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2e85b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2e85bc:
    // 0x2e85bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e85bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e85c0:
    // 0x2e85c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e85c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e85c4:
    // 0x2e85c4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e85c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2e85c8:
    // 0x2e85c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e85c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e85cc:
    // 0x2e85cc: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2e85ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2e85d0:
    // 0x2e85d0: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2e85d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2e85d4:
    // 0x2e85d4: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2e85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2e85d8:
    // 0x2e85d8: 0x40f809  jalr        $v0
label_2e85dc:
    if (ctx->pc == 0x2E85DCu) {
        ctx->pc = 0x2E85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85D8u;
        // 0x2e85dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85E0u;
        goto label_2e85e0;
    }
    ctx->pc = 0x2E85D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E85E0u);
        ctx->pc = 0x2E85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85D8u;
        // 0x2e85dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E85D8u, 0x2E85E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E85E0u;
label_2e85e0:
    // 0x2e85e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e85e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e85e4:
    // 0x2e85e4: 0xc0a337e  jal         func_28CDF8
label_2e85e8:
    if (ctx->pc == 0x2E85E8u) {
        ctx->pc = 0x2E85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85E4u;
        // 0x2e85e8: 0x82050040  lb          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85ECu;
        goto label_2e85ec;
    }
    ctx->pc = 0x2E85E4u;
    SET_GPR_U32(ctx, 31, 0x2E85ECu);
    ctx->pc = 0x2E85E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E85E4u;
    // 0x2e85e8: 0x82050040  lb          $a1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2E85E4u, 0x2E85ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E85ECu;
label_2e85ec:
    // 0x2e85ec: 0x82050041  lb          $a1, 0x41($s0)
    ctx->pc = 0x2e85ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
label_2e85f0:
    // 0x2e85f0: 0xc0a3398  jal         func_28CE60
label_2e85f4:
    if (ctx->pc == 0x2E85F4u) {
        ctx->pc = 0x2E85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E85F0u;
        // 0x2e85f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E85F8u;
        goto label_2e85f8;
    }
    ctx->pc = 0x2E85F0u;
    SET_GPR_U32(ctx, 31, 0x2E85F8u);
    ctx->pc = 0x2E85F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E85F0u;
    // 0x2e85f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2E85F0u, 0x2E85F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E85F8u;
label_2e85f8:
    // 0x2e85f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e85f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e85fc:
    // 0x2e85fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e85fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8600:
    // 0x2e8600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e8604:
    // 0x2e8604: 0x3e00008  jr          $ra
label_2e8608:
    if (ctx->pc == 0x2E8608u) {
        ctx->pc = 0x2E8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8604u;
        // 0x2e8608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E860Cu;
        goto label_2e860c;
    }
    ctx->pc = 0x2E8604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8604u;
        // 0x2e8608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E860Cu;
label_2e860c:
    // 0x2e860c: 0x0  nop
    ctx->pc = 0x2e860cu;
    // NOP
    ctx->pc = 0x2e8610u;
}
