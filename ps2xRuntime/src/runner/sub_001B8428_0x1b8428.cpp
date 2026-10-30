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

// Function: sub_001B8428
// Address: 0x1b8428 - 0x1b8530
void sub_001B8428_0x1b8428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8428_0x1b8428");
#endif

    switch (ctx->pc) {
        case 0x1b8428u: goto label_1b8428;
        case 0x1b842cu: goto label_1b842c;
        case 0x1b8430u: goto label_1b8430;
        case 0x1b8434u: goto label_1b8434;
        case 0x1b8438u: goto label_1b8438;
        case 0x1b843cu: goto label_1b843c;
        case 0x1b8440u: goto label_1b8440;
        case 0x1b8444u: goto label_1b8444;
        case 0x1b8448u: goto label_1b8448;
        case 0x1b844cu: goto label_1b844c;
        case 0x1b8450u: goto label_1b8450;
        case 0x1b8454u: goto label_1b8454;
        case 0x1b8458u: goto label_1b8458;
        case 0x1b845cu: goto label_1b845c;
        case 0x1b8460u: goto label_1b8460;
        case 0x1b8464u: goto label_1b8464;
        case 0x1b8468u: goto label_1b8468;
        case 0x1b846cu: goto label_1b846c;
        case 0x1b8470u: goto label_1b8470;
        case 0x1b8474u: goto label_1b8474;
        case 0x1b8478u: goto label_1b8478;
        case 0x1b847cu: goto label_1b847c;
        case 0x1b8480u: goto label_1b8480;
        case 0x1b8484u: goto label_1b8484;
        case 0x1b8488u: goto label_1b8488;
        case 0x1b848cu: goto label_1b848c;
        case 0x1b8490u: goto label_1b8490;
        case 0x1b8494u: goto label_1b8494;
        case 0x1b8498u: goto label_1b8498;
        case 0x1b849cu: goto label_1b849c;
        case 0x1b84a0u: goto label_1b84a0;
        case 0x1b84a4u: goto label_1b84a4;
        case 0x1b84a8u: goto label_1b84a8;
        case 0x1b84acu: goto label_1b84ac;
        case 0x1b84b0u: goto label_1b84b0;
        case 0x1b84b4u: goto label_1b84b4;
        case 0x1b84b8u: goto label_1b84b8;
        case 0x1b84bcu: goto label_1b84bc;
        case 0x1b84c0u: goto label_1b84c0;
        case 0x1b84c4u: goto label_1b84c4;
        case 0x1b84c8u: goto label_1b84c8;
        case 0x1b84ccu: goto label_1b84cc;
        case 0x1b84d0u: goto label_1b84d0;
        case 0x1b84d4u: goto label_1b84d4;
        case 0x1b84d8u: goto label_1b84d8;
        case 0x1b84dcu: goto label_1b84dc;
        case 0x1b84e0u: goto label_1b84e0;
        case 0x1b84e4u: goto label_1b84e4;
        case 0x1b84e8u: goto label_1b84e8;
        case 0x1b84ecu: goto label_1b84ec;
        case 0x1b84f0u: goto label_1b84f0;
        case 0x1b84f4u: goto label_1b84f4;
        case 0x1b84f8u: goto label_1b84f8;
        case 0x1b84fcu: goto label_1b84fc;
        case 0x1b8500u: goto label_1b8500;
        case 0x1b8504u: goto label_1b8504;
        case 0x1b8508u: goto label_1b8508;
        case 0x1b850cu: goto label_1b850c;
        case 0x1b8510u: goto label_1b8510;
        case 0x1b8514u: goto label_1b8514;
        case 0x1b8518u: goto label_1b8518;
        case 0x1b851cu: goto label_1b851c;
        case 0x1b8520u: goto label_1b8520;
        case 0x1b8524u: goto label_1b8524;
        case 0x1b8528u: goto label_1b8528;
        case 0x1b852cu: goto label_1b852c;
        default: break;
    }

    ctx->pc = 0x1b8428u;

label_1b8428:
    // 0x1b8428: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b8428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1b842c:
    // 0x1b842c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1b8430:
    // 0x1b8430: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1b8430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1b8434:
    // 0x1b8434: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b8434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8438:
    // 0x1b8438: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1b8438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1b843c:
    // 0x1b843c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b843cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b8440:
    // 0x1b8440: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1b8440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1b8444:
    // 0x1b8444: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1b8444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1b8448:
    // 0x1b8448: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1b8448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1b844c:
    // 0x1b844c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1b844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1b8450:
    // 0x1b8450: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
label_1b8454:
    if (ctx->pc == 0x1B8454u) {
        ctx->pc = 0x1B8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8450u;
        // 0x1b8454: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8458u;
        goto label_1b8458;
    }
    ctx->pc = 0x1B8450u;
    {
        const bool branch_taken_0x1b8450 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8450u;
        // 0x1b8454: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8450) {
            ctx->pc = 0x1B84DCu;
            goto label_1b84dc;
        }
    }
    ctx->pc = 0x1B8458u;
label_1b8458:
    // 0x1b8458: 0x26700040  addiu       $s0, $s3, 0x40
    ctx->pc = 0x1b8458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1b845c:
    // 0x1b845c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1b845cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1b8460:
    // 0x1b8460: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1b8460u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1b8464:
    // 0x1b8464: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b8464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8468:
    // 0x1b8468: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1b8468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b846c:
    // 0x1b846c: 0x0  nop
    ctx->pc = 0x1b846cu;
    // NOP
label_1b8470:
    // 0x1b8470: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b8470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8474:
    // 0x1b8474: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b8474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1b8478:
    // 0x1b8478: 0xc68cd6e4  lwc1        $f12, -0x291C($s4)
    ctx->pc = 0x1b8478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294956772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b847c:
    // 0x1b847c: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1b847cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1b8480:
    // 0x1b8480: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1b8480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1b8484:
    // 0x1b8484: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1b8484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1b8488:
    // 0x1b8488: 0x60f809  jalr        $v1
label_1b848c:
    if (ctx->pc == 0x1B848Cu) {
        ctx->pc = 0x1B848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8488u;
        // 0x1b848c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8490u;
        goto label_1b8490;
    }
    ctx->pc = 0x1B8488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8490u);
        ctx->pc = 0x1B848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8488u;
        // 0x1b848c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8488u, 0x1B8490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8490u;
label_1b8490:
    // 0x1b8490: 0x641fff7  bgez        $s2, . + 4 + (-0x9 << 2)
label_1b8494:
    if (ctx->pc == 0x1B8494u) {
        ctx->pc = 0x1B8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8490u;
        // 0x1b8494: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8498u;
        goto label_1b8498;
    }
    ctx->pc = 0x1B8490u;
    {
        const bool branch_taken_0x1b8490 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8490u;
        // 0x1b8494: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8490) {
            ctx->pc = 0x1B8470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8470;
        }
    }
    ctx->pc = 0x1B8498u;
label_1b8498:
    // 0x1b8498: 0x8ec4aa84  lw          $a0, -0x557C($s6)
    ctx->pc = 0x1b8498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945412)));
label_1b849c:
    // 0x1b849c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1b849cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1b84a0:
    // 0x1b84a0: 0x24a548e0  addiu       $a1, $a1, 0x48E0
    ctx->pc = 0x1b84a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18656));
label_1b84a4:
    // 0x1b84a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b84a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b84a8:
    // 0x1b84a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b84a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b84ac:
    // 0x1b84ac: 0xc043f1c  jal         func_10FC70
label_1b84b0:
    if (ctx->pc == 0x1B84B0u) {
        ctx->pc = 0x1B84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84ACu;
        // 0x1b84b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B84B4u;
        goto label_1b84b4;
    }
    ctx->pc = 0x1B84ACu;
    SET_GPR_U32(ctx, 31, 0x1B84B4u);
    ctx->pc = 0x1B84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84ACu;
    // 0x1b84b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x1B84ACu, 0x1B84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84B4u;
label_1b84b4:
    // 0x1b84b4: 0x8ec4aa84  lw          $a0, -0x557C($s6)
    ctx->pc = 0x1b84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945412)));
label_1b84b8:
    // 0x1b84b8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1b84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1b84bc:
    // 0x1b84bc: 0x24a548f8  addiu       $a1, $a1, 0x48F8
    ctx->pc = 0x1b84bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18680));
label_1b84c0:
    // 0x1b84c0: 0xc04402c  jal         func_1100B0
label_1b84c4:
    if (ctx->pc == 0x1B84C4u) {
        ctx->pc = 0x1B84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84C0u;
        // 0x1b84c4: 0xae620450  sw          $v0, 0x450($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B84C8u;
        goto label_1b84c8;
    }
    ctx->pc = 0x1B84C0u;
    SET_GPR_U32(ctx, 31, 0x1B84C8u);
    ctx->pc = 0x1B84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84C0u;
    // 0x1b84c4: 0xae620450  sw          $v0, 0x450($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100B0u, 0x1B84C0u, 0x1B84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84C8u;
label_1b84c8:
    // 0x1b84c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1b84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_1b84cc:
    // 0x1b84cc: 0xac622e48  sw          $v0, 0x2E48($v1)
    ctx->pc = 0x1b84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11848), GPR_U32(ctx, 2));
label_1b84d0:
    // 0x1b84d0: 0xae600468  sw          $zero, 0x468($s3)
    ctx->pc = 0x1b84d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1128), GPR_U32(ctx, 0));
label_1b84d4:
    // 0x1b84d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b84d8:
    if (ctx->pc == 0x1B84D8u) {
        ctx->pc = 0x1B84D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84D4u;
        // 0x1b84d8: 0xae600470  sw          $zero, 0x470($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B84DCu;
        goto label_1b84dc;
    }
    ctx->pc = 0x1B84D4u;
    {
        const bool branch_taken_0x1b84d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B84D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84D4u;
        // 0x1b84d8: 0xae600470  sw          $zero, 0x470($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84d4) {
            ctx->pc = 0x1B8504u;
            goto label_1b8504;
        }
    }
    ctx->pc = 0x1B84DCu;
label_1b84dc:
    // 0x1b84dc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1b84dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1b84e0:
    // 0x1b84e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1b84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1b84e4:
    // 0x1b84e4: 0x8c452e48  lw          $a1, 0x2E48($v0)
    ctx->pc = 0x1b84e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11848)));
label_1b84e8:
    // 0x1b84e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b84e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b84ec:
    // 0x1b84ec: 0xc0440c6  jal         func_110318
label_1b84f0:
    if (ctx->pc == 0x1B84F0u) {
        ctx->pc = 0x1B84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84ECu;
        // 0x1b84f0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B84F4u;
        goto label_1b84f4;
    }
    ctx->pc = 0x1B84ECu;
    SET_GPR_U32(ctx, 31, 0x1B84F4u);
    ctx->pc = 0x1B84F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84ECu;
    // 0x1b84f0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x1B84ECu, 0x1B84F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84F4u;
label_1b84f4:
    // 0x1b84f4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1b84f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1b84f8:
    // 0x1b84f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b84f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b84fc:
    // 0x1b84fc: 0xc0440c6  jal         func_110318
label_1b8500:
    if (ctx->pc == 0x1B8500u) {
        ctx->pc = 0x1B8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84FCu;
        // 0x1b8500: 0x8e650450  lw          $a1, 0x450($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8504u;
        goto label_1b8504;
    }
    ctx->pc = 0x1B84FCu;
    SET_GPR_U32(ctx, 31, 0x1B8504u);
    ctx->pc = 0x1B8500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84FCu;
    // 0x1b8500: 0x8e650450  lw          $a1, 0x450($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x1B84FCu, 0x1B8504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8504u;
label_1b8504:
    // 0x1b8504: 0xae750478  sw          $s5, 0x478($s3)
    ctx->pc = 0x1b8504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1144), GPR_U32(ctx, 21));
label_1b8508:
    // 0x1b8508: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1b8508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b850c:
    // 0x1b850c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1b850cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b8510:
    // 0x1b8510: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1b8510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b8514:
    // 0x1b8514: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b8514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8518:
    // 0x1b8518: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1b8518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b851c:
    // 0x1b851c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1b851cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8520:
    // 0x1b8520: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1b8520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8524:
    // 0x1b8524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8528:
    // 0x1b8528: 0x3e00008  jr          $ra
label_1b852c:
    if (ctx->pc == 0x1B852Cu) {
        ctx->pc = 0x1B852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8528u;
        // 0x1b852c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8530u;
        goto label_fallthrough_0x1b8528;
    }
    ctx->pc = 0x1B8528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8528u;
        // 0x1b852c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b8528:
    ctx->pc = 0x1B8530u;
}
