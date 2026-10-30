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

// Function: sub_004162F8
// Address: 0x4162f8 - 0x416530
void sub_004162F8_0x4162f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004162F8_0x4162f8");
#endif

    switch (ctx->pc) {
        case 0x41632cu: goto label_41632c;
        case 0x416344u: goto label_416344;
        case 0x41635cu: goto label_41635c;
        case 0x4164d8u: goto label_4164d8;
        default: break;
    }

    ctx->pc = 0x4162f8u;

    // 0x4162f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4162f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4162fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4162fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x416300: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x416300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x416304: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x416304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416308: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x416308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x41630c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41630cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416310: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x416310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x416314: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x416314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416318: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x416318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x41631c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x41631cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x416320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x416320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x416324: 0xc08a200  jal         func_228800
    ctx->pc = 0x416324u;
    SET_GPR_U32(ctx, 31, 0x41632Cu);
    ctx->pc = 0x416328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416324u;
    // 0x416328: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x416324u, 0x41632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41632Cu;
label_41632c:
    // 0x41632c: 0x9043014b  lbu         $v1, 0x14B($v0)
    ctx->pc = 0x41632cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 331)));
    // 0x416330: 0x8e624868  lw          $v0, 0x4868($s3)
    ctx->pc = 0x416330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18536)));
    // 0x416334: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x416334u;
    {
        const bool branch_taken_0x416334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x416338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416334u;
        // 0x416338: 0x2c740001  sltiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x416334) {
            ctx->pc = 0x416350u;
            goto label_416350;
        }
    }
    ctx->pc = 0x41633Cu;
    // 0x41633c: 0xc10d272  jal         func_4349C8
    ctx->pc = 0x41633Cu;
    SET_GPR_U32(ctx, 31, 0x416344u);
    ctx->pc = 0x4349C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4349C8u, 0x41633Cu, 0x416344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416344u;
label_416344:
    // 0x416344: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x416344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x416348: 0xae704868  sw          $s0, 0x4868($s3)
    ctx->pc = 0x416348u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 18536), GPR_U32(ctx, 16));
    // 0x41634c: 0xac624864  sw          $v0, 0x4864($v1)
    ctx->pc = 0x41634cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x514864u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x514864u, _value); } while (0);
label_416350:
    // 0x416350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x416350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416354: 0xc1059c6  jal         func_416718
    ctx->pc = 0x416354u;
    SET_GPR_U32(ctx, 31, 0x41635Cu);
    ctx->pc = 0x416358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416354u;
    // 0x416358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416718u, 0x416354u, 0x41635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41635Cu;
label_41635c:
    // 0x41635c: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x41635Cu;
    {
        const bool branch_taken_0x41635c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41635Cu;
        // 0x416360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41635c) {
            ctx->pc = 0x41650Cu;
            goto label_41650c;
        }
    }
    ctx->pc = 0x416364u;
    // 0x416364: 0x962200d0  lhu         $v0, 0xD0($s1)
    ctx->pc = 0x416364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x416368: 0x2444fffc  addiu       $a0, $v0, -0x4
    ctx->pc = 0x416368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x41636c: 0x2c83001f  sltiu       $v1, $a0, 0x1F
    ctx->pc = 0x41636cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x416370: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x416370u;
    {
        const bool branch_taken_0x416370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x416374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416370u;
        // 0x416374: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416370) {
            ctx->pc = 0x4164CCu;
            goto label_4164cc;
        }
    }
    ctx->pc = 0x416378u;
    // 0x416378: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x416378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x41637c: 0x24429550  addiu       $v0, $v0, -0x6AB0
    ctx->pc = 0x41637cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939984));
    // 0x416380: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x416380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x416384: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x416384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x416388: 0x800008  jr          $a0
    ctx->pc = 0x416388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x416390u: goto label_416390;
            case 0x4163D0u: goto label_4163d0;
            case 0x416400u: goto label_416400;
            case 0x41645Cu: goto label_41645c;
            case 0x41647Cu: goto label_41647c;
            case 0x41649Cu: goto label_41649c;
            case 0x4164CCu: goto label_4164cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416388u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x416390u;
label_416390:
    // 0x416390: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x416390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x416394: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x416394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x416398: 0x8c464864  lw          $a2, 0x4864($v0)
    ctx->pc = 0x416398u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x514864u));
    // 0x41639c: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x41639cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x4163a0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x4163a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4163a4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4163a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4163a8: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x4163a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4163ac: 0x2463a438  addiu       $v1, $v1, -0x5BC8
    ctx->pc = 0x4163acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943800));
    // 0x4163b0: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x4163b0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x4163b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4163B4u;
    {
        const bool branch_taken_0x4163b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4163b4) {
            ctx->pc = 0x4163B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4163B4u;
            // 0x4163b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4163BCu;
            goto label_4163bc;
        }
    }
    ctx->pc = 0x4163BCu;
label_4163bc:
    // 0x4163bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4163bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4163c0: 0x2010  mfhi        $a0
    ctx->pc = 0x4163c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x4163c4: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x4163c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4163c8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x4163C8u;
    {
        const bool branch_taken_0x4163c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4163CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4163C8u;
        // 0x4163cc: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4163c8) {
            ctx->pc = 0x41650Cu;
            goto label_41650c;
        }
    }
    ctx->pc = 0x4163D0u;
label_4163d0:
    // 0x4163d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4163d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4163d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4163d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4163d8: 0x8c454864  lw          $a1, 0x4864($v0)
    ctx->pc = 0x4163d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x514864u));
    // 0x4163dc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4163dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4163e0: 0x2484a5a0  addiu       $a0, $a0, -0x5A60
    ctx->pc = 0x4163e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944160));
    // 0x4163e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4163E4u;
    {
        const bool branch_taken_0x4163e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4163e4) {
            ctx->pc = 0x4163E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4163E4u;
            // 0x4163e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4163ECu;
            goto label_4163ec;
        }
    }
    ctx->pc = 0x4163ECu;
label_4163ec:
    // 0x4163ec: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x4163ecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x4163f0: 0x1010  mfhi        $v0
    ctx->pc = 0x4163f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x4163f4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4163f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4163f8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x4163F8u;
    {
        const bool branch_taken_0x4163f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4163FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4163F8u;
        // 0x4163fc: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4163f8) {
            ctx->pc = 0x41650Cu;
            goto label_41650c;
        }
    }
    ctx->pc = 0x416400u;
label_416400:
    // 0x416400: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x416400u;
    {
        const bool branch_taken_0x416400 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x416404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416400u;
        // 0x416404: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416400) {
            ctx->pc = 0x416428u;
            goto label_416428;
        }
    }
    ctx->pc = 0x416408u;
    // 0x416408: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x416408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x41640c: 0x8c824864  lw          $v0, 0x4864($a0)
    ctx->pc = 0x41640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18532)));
    // 0x416410: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x416410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x416414: 0x2463a760  addiu       $v1, $v1, -0x58A0
    ctx->pc = 0x416414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944608));
    // 0x416418: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x416418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x41641c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x41641cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x416420: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x416420u;
    {
        const bool branch_taken_0x416420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416420u;
        // 0x416424: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416420) {
            ctx->pc = 0x41650Cu;
            goto label_41650c;
        }
    }
    ctx->pc = 0x416428u;
label_416428:
    // 0x416428: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x416428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41642c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x41642cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x416430: 0x8c454864  lw          $a1, 0x4864($v0)
    ctx->pc = 0x416430u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x514864u));
    // 0x416434: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x416434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x416438: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x416438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x41643c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x41643Cu;
    {
        const bool branch_taken_0x41643c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41643c) {
            ctx->pc = 0x416440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41643Cu;
            // 0x416440: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x416444u;
            goto label_416444;
        }
    }
    ctx->pc = 0x416444u;
label_416444:
    // 0x416444: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x416444u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x416448: 0x2484a7c0  addiu       $a0, $a0, -0x5840
    ctx->pc = 0x416448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944704));
    // 0x41644c: 0x1010  mfhi        $v0
    ctx->pc = 0x41644cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x416450: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x416450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x416454: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x416454u;
    {
        const bool branch_taken_0x416454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416454u;
        // 0x416458: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416454) {
            ctx->pc = 0x41650Cu;
            goto label_41650c;
        }
    }
    ctx->pc = 0x41645Cu;
label_41645c:
    // 0x41645c: 0x1680001c  bnez        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x41645Cu;
    {
        const bool branch_taken_0x41645c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x416460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41645Cu;
        // 0x416460: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41645c) {
            ctx->pc = 0x4164D0u;
            goto label_4164d0;
        }
    }
    ctx->pc = 0x416464u;
    // 0x416464: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x416464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x416468: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x416468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x41646c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x41646cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x416470: 0x2442a838  addiu       $v0, $v0, -0x57C8
    ctx->pc = 0x416470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944824));
    // 0x416474: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x416474u;
    {
        const bool branch_taken_0x416474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416474u;
        // 0x416478: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416474) {
            ctx->pc = 0x41650Cu;
            goto label_41650c;
        }
    }
    ctx->pc = 0x41647Cu;
label_41647c:
    // 0x41647c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x41647cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x416480: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x416480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x416484: 0x8c824864  lw          $v0, 0x4864($a0)
    ctx->pc = 0x416484u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x514864u));
    // 0x416488: 0x2463a6e0  addiu       $v1, $v1, -0x5920
    ctx->pc = 0x416488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944480));
    // 0x41648c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x41648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x416490: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x416490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x416494: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x416494u;
    {
        const bool branch_taken_0x416494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416494u;
        // 0x416498: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416494) {
            ctx->pc = 0x41650Cu;
            goto label_41650c;
        }
    }
    ctx->pc = 0x41649Cu;
label_41649c:
    // 0x41649c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4164a0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x4164a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4164a4: 0x8c624864  lw          $v0, 0x4864($v1)
    ctx->pc = 0x4164a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x514864u));
    // 0x4164a8: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x4164a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4164ac: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x4164acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x4164b0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4164b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4164b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4164b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4164b8: 0x2463a880  addiu       $v1, $v1, -0x5780
    ctx->pc = 0x4164b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944896));
    // 0x4164bc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4164bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4164c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4164c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4164c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4164C4u;
    {
        const bool branch_taken_0x4164c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4164C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164C4u;
        // 0x4164c8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4164c4) {
            ctx->pc = 0x41650Cu;
            goto label_41650c;
        }
    }
    ctx->pc = 0x4164CCu;
label_4164cc:
    // 0x4164cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4164ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4164d0:
    // 0x4164d0: 0xc1058b4  jal         func_4162D0
    ctx->pc = 0x4164D0u;
    SET_GPR_U32(ctx, 31, 0x4164D8u);
    ctx->pc = 0x4164D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4164D0u;
    // 0x4164d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4162D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162D0u, 0x4164D0u, 0x4164D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4164D8u;
label_4164d8:
    // 0x4164d8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4164d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4164dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4164DCu;
    {
        const bool branch_taken_0x4164dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4164E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4164DCu;
        // 0x4164e0: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4164dc) {
            ctx->pc = 0x416508u;
            goto label_416508;
        }
    }
    ctx->pc = 0x4164E4u;
    // 0x4164e4: 0x962500d0  lhu         $a1, 0xD0($s1)
    ctx->pc = 0x4164e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x4164e8: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x4164e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4164ec: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x4164ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x4164f0: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x4164f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4164f4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4164f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4164f8: 0x246396a0  addiu       $v1, $v1, -0x6960
    ctx->pc = 0x4164f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940320));
    // 0x4164fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4164fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x416500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x416500u;
    {
        const bool branch_taken_0x416500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416500u;
        // 0x416504: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416500) {
            ctx->pc = 0x41650Cu;
            goto label_41650c;
        }
    }
    ctx->pc = 0x416508u;
label_416508:
    // 0x416508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x416508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41650c:
    // 0x41650c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41650cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x416510: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x416510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x416514: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x416514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x416518: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x416518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41651c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x41651cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x416520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x416520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x416524: 0x3e00008  jr          $ra
    ctx->pc = 0x416524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416524u;
        // 0x416528: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41652Cu;
    // 0x41652c: 0x0  nop
    ctx->pc = 0x41652cu;
    // NOP
    ctx->pc = 0x416530u;
}
