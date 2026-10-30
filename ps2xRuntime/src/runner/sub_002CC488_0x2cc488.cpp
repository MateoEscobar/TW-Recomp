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

// Function: sub_002CC488
// Address: 0x2cc488 - 0x2cc588
void sub_002CC488_0x2cc488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC488_0x2cc488");
#endif

    switch (ctx->pc) {
        case 0x2cc488u: goto label_2cc488;
        case 0x2cc48cu: goto label_2cc48c;
        case 0x2cc490u: goto label_2cc490;
        case 0x2cc494u: goto label_2cc494;
        case 0x2cc498u: goto label_2cc498;
        case 0x2cc49cu: goto label_2cc49c;
        case 0x2cc4a0u: goto label_2cc4a0;
        case 0x2cc4a4u: goto label_2cc4a4;
        case 0x2cc4a8u: goto label_2cc4a8;
        case 0x2cc4acu: goto label_2cc4ac;
        case 0x2cc4b0u: goto label_2cc4b0;
        case 0x2cc4b4u: goto label_2cc4b4;
        case 0x2cc4b8u: goto label_2cc4b8;
        case 0x2cc4bcu: goto label_2cc4bc;
        case 0x2cc4c0u: goto label_2cc4c0;
        case 0x2cc4c4u: goto label_2cc4c4;
        case 0x2cc4c8u: goto label_2cc4c8;
        case 0x2cc4ccu: goto label_2cc4cc;
        case 0x2cc4d0u: goto label_2cc4d0;
        case 0x2cc4d4u: goto label_2cc4d4;
        case 0x2cc4d8u: goto label_2cc4d8;
        case 0x2cc4dcu: goto label_2cc4dc;
        case 0x2cc4e0u: goto label_2cc4e0;
        case 0x2cc4e4u: goto label_2cc4e4;
        case 0x2cc4e8u: goto label_2cc4e8;
        case 0x2cc4ecu: goto label_2cc4ec;
        case 0x2cc4f0u: goto label_2cc4f0;
        case 0x2cc4f4u: goto label_2cc4f4;
        case 0x2cc4f8u: goto label_2cc4f8;
        case 0x2cc4fcu: goto label_2cc4fc;
        case 0x2cc500u: goto label_2cc500;
        case 0x2cc504u: goto label_2cc504;
        case 0x2cc508u: goto label_2cc508;
        case 0x2cc50cu: goto label_2cc50c;
        case 0x2cc510u: goto label_2cc510;
        case 0x2cc514u: goto label_2cc514;
        case 0x2cc518u: goto label_2cc518;
        case 0x2cc51cu: goto label_2cc51c;
        case 0x2cc520u: goto label_2cc520;
        case 0x2cc524u: goto label_2cc524;
        case 0x2cc528u: goto label_2cc528;
        case 0x2cc52cu: goto label_2cc52c;
        case 0x2cc530u: goto label_2cc530;
        case 0x2cc534u: goto label_2cc534;
        case 0x2cc538u: goto label_2cc538;
        case 0x2cc53cu: goto label_2cc53c;
        case 0x2cc540u: goto label_2cc540;
        case 0x2cc544u: goto label_2cc544;
        case 0x2cc548u: goto label_2cc548;
        case 0x2cc54cu: goto label_2cc54c;
        case 0x2cc550u: goto label_2cc550;
        case 0x2cc554u: goto label_2cc554;
        case 0x2cc558u: goto label_2cc558;
        case 0x2cc55cu: goto label_2cc55c;
        case 0x2cc560u: goto label_2cc560;
        case 0x2cc564u: goto label_2cc564;
        case 0x2cc568u: goto label_2cc568;
        case 0x2cc56cu: goto label_2cc56c;
        case 0x2cc570u: goto label_2cc570;
        case 0x2cc574u: goto label_2cc574;
        case 0x2cc578u: goto label_2cc578;
        case 0x2cc57cu: goto label_2cc57c;
        case 0x2cc580u: goto label_2cc580;
        case 0x2cc584u: goto label_2cc584;
        default: break;
    }

    ctx->pc = 0x2cc488u;

label_2cc488:
    // 0x2cc488: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cc488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2cc48c:
    // 0x2cc48c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2cc48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2cc490:
    // 0x2cc490: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2cc490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2cc494:
    // 0x2cc494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cc494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cc498:
    // 0x2cc498: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2cc498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2cc49c:
    // 0x2cc49c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2cc49cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2cc4a0:
    // 0x2cc4a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cc4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2cc4a4:
    // 0x2cc4a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc4a8:
    // 0x2cc4a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cc4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2cc4ac:
    // 0x2cc4ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cc4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cc4b0:
    // 0x2cc4b0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2cc4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cc4b4:
    // 0x2cc4b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2cc4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cc4b8:
    // 0x2cc4b8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2cc4b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2cc4bc:
    // 0x2cc4bc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2cc4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2cc4c0:
    // 0x2cc4c0: 0x60f809  jalr        $v1
label_2cc4c4:
    if (ctx->pc == 0x2CC4C4u) {
        ctx->pc = 0x2CC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4C0u;
        // 0x2cc4c4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC4C8u;
        goto label_2cc4c8;
    }
    ctx->pc = 0x2CC4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CC4C8u);
        ctx->pc = 0x2CC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4C0u;
        // 0x2cc4c4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC4C0u, 0x2CC4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC4C8u;
label_2cc4c8:
    // 0x2cc4c8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2cc4c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc4cc:
    // 0x2cc4cc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2cc4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2cc4d0:
    // 0x2cc4d0: 0xc0e409a  jal         func_390268
label_2cc4d4:
    if (ctx->pc == 0x2CC4D4u) {
        ctx->pc = 0x2CC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4D0u;
        // 0x2cc4d4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC4D8u;
        goto label_2cc4d8;
    }
    ctx->pc = 0x2CC4D0u;
    SET_GPR_U32(ctx, 31, 0x2CC4D8u);
    ctx->pc = 0x2CC4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC4D0u;
    // 0x2cc4d4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CC4D0u, 0x2CC4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC4D8u;
label_2cc4d8:
    // 0x2cc4d8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2cc4dc:
    if (ctx->pc == 0x2CC4DCu) {
        ctx->pc = 0x2CC4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4D8u;
        // 0x2cc4dc: 0x24520090  addiu       $s2, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC4E0u;
        goto label_2cc4e0;
    }
    ctx->pc = 0x2CC4D8u;
    {
        const bool branch_taken_0x2cc4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4D8u;
        // 0x2cc4dc: 0x24520090  addiu       $s2, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4d8) {
            ctx->pc = 0x2CC568u;
            goto label_2cc568;
        }
    }
    ctx->pc = 0x2CC4E0u;
label_2cc4e0:
    // 0x2cc4e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cc4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc4e4:
    // 0x2cc4e4: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2cc4e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2cc4e8:
    // 0x2cc4e8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2cc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2cc4ec:
    // 0x2cc4ec: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x2cc4ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2cc4f0:
    // 0x2cc4f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cc4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cc4f4:
    // 0x2cc4f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2cc4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2cc4f8:
    // 0x2cc4f8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cc4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2cc4fc:
    // 0x2cc4fc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2cc4fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2cc500:
    // 0x2cc500: 0xc0cdb62  jal         func_336D88
label_2cc504:
    if (ctx->pc == 0x2CC504u) {
        ctx->pc = 0x2CC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC500u;
        // 0x2cc504: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC508u;
        goto label_2cc508;
    }
    ctx->pc = 0x2CC500u;
    SET_GPR_U32(ctx, 31, 0x2CC508u);
    ctx->pc = 0x2CC504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC500u;
    // 0x2cc504: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2CC500u, 0x2CC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC508u;
label_2cc508:
    // 0x2cc508: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2cc508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc50c:
    // 0x2cc50c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2cc50cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2cc510:
    // 0x2cc510: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cc510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc514:
    // 0x2cc514: 0x0  nop
    ctx->pc = 0x2cc514u;
    // NOP
label_2cc518:
    // 0x2cc518: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_2cc51c:
    if (ctx->pc == 0x2CC51Cu) {
        ctx->pc = 0x2CC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC518u;
        // 0x2cc51c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC520u;
        goto label_2cc520;
    }
    ctx->pc = 0x2CC518u;
    {
        const bool branch_taken_0x2cc518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc518) {
            ctx->pc = 0x2CC51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC518u;
            // 0x2cc51c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC56Cu;
            goto label_2cc56c;
        }
    }
    ctx->pc = 0x2CC520u;
label_2cc520:
    // 0x2cc520: 0xc0a36c8  jal         func_28DB20
label_2cc524:
    if (ctx->pc == 0x2CC524u) {
        ctx->pc = 0x2CC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC520u;
        // 0x2cc524: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC528u;
        goto label_2cc528;
    }
    ctx->pc = 0x2CC520u;
    SET_GPR_U32(ctx, 31, 0x2CC528u);
    ctx->pc = 0x2CC524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC520u;
    // 0x2cc524: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2CC520u, 0x2CC528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC528u;
label_2cc528:
    // 0x2cc528: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cc528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cc52c:
    // 0x2cc52c: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2cc52cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2cc530:
    // 0x2cc530: 0x5c40000e  bgtzl       $v0, . + 4 + (0xE << 2)
label_2cc534:
    if (ctx->pc == 0x2CC534u) {
        ctx->pc = 0x2CC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC530u;
        // 0x2cc534: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC538u;
        goto label_2cc538;
    }
    ctx->pc = 0x2CC530u;
    {
        const bool branch_taken_0x2cc530 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2cc530) {
            ctx->pc = 0x2CC534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC530u;
            // 0x2cc534: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC56Cu;
            goto label_2cc56c;
        }
    }
    ctx->pc = 0x2CC538u;
label_2cc538:
    // 0x2cc538: 0xc0a367c  jal         func_28D9F0
label_2cc53c:
    if (ctx->pc == 0x2CC53Cu) {
        ctx->pc = 0x2CC540u;
        goto label_2cc540;
    }
    ctx->pc = 0x2CC538u;
    SET_GPR_U32(ctx, 31, 0x2CC540u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CC538u, 0x2CC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC540u;
label_2cc540:
    // 0x2cc540: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2cc544:
    if (ctx->pc == 0x2CC544u) {
        ctx->pc = 0x2CC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC540u;
        // 0x2cc544: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC548u;
        goto label_2cc548;
    }
    ctx->pc = 0x2CC540u;
    {
        const bool branch_taken_0x2cc540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC540u;
        // 0x2cc544: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc540) {
            ctx->pc = 0x2CC568u;
            goto label_2cc568;
        }
    }
    ctx->pc = 0x2CC548u;
label_2cc548:
    // 0x2cc548: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x2cc548u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2cc54c:
    // 0x2cc54c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cc54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cc550:
    // 0x2cc550: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2cc550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cc554:
    // 0x2cc554: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2cc554u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2cc558:
    // 0x2cc558: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cc558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2cc55c:
    // 0x2cc55c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cc55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cc560:
    // 0x2cc560: 0xc0bf800  jal         func_2FE000
label_2cc564:
    if (ctx->pc == 0x2CC564u) {
        ctx->pc = 0x2CC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC560u;
        // 0x2cc564: 0xd33021  addu        $a2, $a2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC568u;
        goto label_2cc568;
    }
    ctx->pc = 0x2CC560u;
    SET_GPR_U32(ctx, 31, 0x2CC568u);
    ctx->pc = 0x2CC564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC560u;
    // 0x2cc564: 0xd33021  addu        $a2, $a2, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CC560u, 0x2CC568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC568u;
label_2cc568:
    // 0x2cc568: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2cc568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cc56c:
    // 0x2cc56c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2cc56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cc570:
    // 0x2cc570: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2cc570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cc574:
    // 0x2cc574: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cc574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cc578:
    // 0x2cc578: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cc578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cc57c:
    // 0x2cc57c: 0x3e00008  jr          $ra
label_2cc580:
    if (ctx->pc == 0x2CC580u) {
        ctx->pc = 0x2CC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC57Cu;
        // 0x2cc580: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC584u;
        goto label_2cc584;
    }
    ctx->pc = 0x2CC57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC57Cu;
        // 0x2cc580: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC584u;
label_2cc584:
    // 0x2cc584: 0x0  nop
    ctx->pc = 0x2cc584u;
    // NOP
    ctx->pc = 0x2cc588u;
}
