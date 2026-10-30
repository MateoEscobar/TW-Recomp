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

// Function: sub_001E1458
// Address: 0x1e1458 - 0x1e1550
void sub_001E1458_0x1e1458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1458_0x1e1458");
#endif

    switch (ctx->pc) {
        case 0x1e1458u: goto label_1e1458;
        case 0x1e145cu: goto label_1e145c;
        case 0x1e1460u: goto label_1e1460;
        case 0x1e1464u: goto label_1e1464;
        case 0x1e1468u: goto label_1e1468;
        case 0x1e146cu: goto label_1e146c;
        case 0x1e1470u: goto label_1e1470;
        case 0x1e1474u: goto label_1e1474;
        case 0x1e1478u: goto label_1e1478;
        case 0x1e147cu: goto label_1e147c;
        case 0x1e1480u: goto label_1e1480;
        case 0x1e1484u: goto label_1e1484;
        case 0x1e1488u: goto label_1e1488;
        case 0x1e148cu: goto label_1e148c;
        case 0x1e1490u: goto label_1e1490;
        case 0x1e1494u: goto label_1e1494;
        case 0x1e1498u: goto label_1e1498;
        case 0x1e149cu: goto label_1e149c;
        case 0x1e14a0u: goto label_1e14a0;
        case 0x1e14a4u: goto label_1e14a4;
        case 0x1e14a8u: goto label_1e14a8;
        case 0x1e14acu: goto label_1e14ac;
        case 0x1e14b0u: goto label_1e14b0;
        case 0x1e14b4u: goto label_1e14b4;
        case 0x1e14b8u: goto label_1e14b8;
        case 0x1e14bcu: goto label_1e14bc;
        case 0x1e14c0u: goto label_1e14c0;
        case 0x1e14c4u: goto label_1e14c4;
        case 0x1e14c8u: goto label_1e14c8;
        case 0x1e14ccu: goto label_1e14cc;
        case 0x1e14d0u: goto label_1e14d0;
        case 0x1e14d4u: goto label_1e14d4;
        case 0x1e14d8u: goto label_1e14d8;
        case 0x1e14dcu: goto label_1e14dc;
        case 0x1e14e0u: goto label_1e14e0;
        case 0x1e14e4u: goto label_1e14e4;
        case 0x1e14e8u: goto label_1e14e8;
        case 0x1e14ecu: goto label_1e14ec;
        case 0x1e14f0u: goto label_1e14f0;
        case 0x1e14f4u: goto label_1e14f4;
        case 0x1e14f8u: goto label_1e14f8;
        case 0x1e14fcu: goto label_1e14fc;
        case 0x1e1500u: goto label_1e1500;
        case 0x1e1504u: goto label_1e1504;
        case 0x1e1508u: goto label_1e1508;
        case 0x1e150cu: goto label_1e150c;
        case 0x1e1510u: goto label_1e1510;
        case 0x1e1514u: goto label_1e1514;
        case 0x1e1518u: goto label_1e1518;
        case 0x1e151cu: goto label_1e151c;
        case 0x1e1520u: goto label_1e1520;
        case 0x1e1524u: goto label_1e1524;
        case 0x1e1528u: goto label_1e1528;
        case 0x1e152cu: goto label_1e152c;
        case 0x1e1530u: goto label_1e1530;
        case 0x1e1534u: goto label_1e1534;
        case 0x1e1538u: goto label_1e1538;
        case 0x1e153cu: goto label_1e153c;
        case 0x1e1540u: goto label_1e1540;
        case 0x1e1544u: goto label_1e1544;
        case 0x1e1548u: goto label_1e1548;
        case 0x1e154cu: goto label_1e154c;
        default: break;
    }

    ctx->pc = 0x1e1458u;

label_1e1458:
    // 0x1e1458: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e145c:
    // 0x1e145c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e145cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1e1460:
    // 0x1e1460: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e1460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e1464:
    // 0x1e1464: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e1464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1e1468:
    // 0x1e1468: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e1468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1e146c:
    // 0x1e146c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e146cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1470:
    // 0x1e1470: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e1470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e1474:
    // 0x1e1474: 0x2442bfa0  addiu       $v0, $v0, -0x4060
    ctx->pc = 0x1e1474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950816));
label_1e1478:
    // 0x1e1478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e147c:
    // 0x1e147c: 0x2463bfc8  addiu       $v1, $v1, -0x4038
    ctx->pc = 0x1e147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950856));
label_1e1480:
    // 0x1e1480: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e1480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e1484:
    // 0x1e1484: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x1e1484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_1e1488:
    // 0x1e1488: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x1e1488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1e148c:
    // 0x1e148c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1e1490:
    if (ctx->pc == 0x1E1490u) {
        ctx->pc = 0x1E1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E148Cu;
        // 0x1e1490: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1494u;
        goto label_1e1494;
    }
    ctx->pc = 0x1E148Cu;
    {
        const bool branch_taken_0x1e148c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E148Cu;
        // 0x1e1490: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e148c) {
            ctx->pc = 0x1E14C0u;
            goto label_1e14c0;
        }
    }
    ctx->pc = 0x1E1494u;
label_1e1494:
    // 0x1e1494: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e1494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e1498:
    // 0x1e1498: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e1498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e149c:
    // 0x1e149c: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1e149cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1e14a0:
    // 0x1e14a0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1e14a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1e14a4:
    // 0x1e14a4: 0x24c66660  addiu       $a2, $a2, 0x6660
    ctx->pc = 0x1e14a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26208));
label_1e14a8:
    // 0x1e14a8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1e14a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1e14ac:
    // 0x1e14ac: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1e14acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1e14b0:
    // 0x1e14b0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1e14b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1e14b4:
    // 0x1e14b4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1e14b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1e14b8:
    // 0x1e14b8: 0x60f809  jalr        $v1
label_1e14bc:
    if (ctx->pc == 0x1E14BCu) {
        ctx->pc = 0x1E14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14B8u;
        // 0x1e14bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E14C0u;
        goto label_1e14c0;
    }
    ctx->pc = 0x1E14B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E14C0u);
        ctx->pc = 0x1E14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14B8u;
        // 0x1e14bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E14B8u, 0x1E14C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E14C0u;
label_1e14c0:
    // 0x1e14c0: 0x26300084  addiu       $s0, $s1, 0x84
    ctx->pc = 0x1e14c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_1e14c4:
    // 0x1e14c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e14c8:
    // 0x1e14c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e14cc:
    if (ctx->pc == 0x1E14CCu) {
        ctx->pc = 0x1E14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14C8u;
        // 0x1e14cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E14D0u;
        goto label_1e14d0;
    }
    ctx->pc = 0x1E14C8u;
    {
        const bool branch_taken_0x1e14c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14C8u;
        // 0x1e14cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14c8) {
            ctx->pc = 0x1E14F8u;
            goto label_1e14f8;
        }
    }
    ctx->pc = 0x1E14D0u;
label_1e14d0:
    // 0x1e14d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e14d4:
    // 0x1e14d4: 0xc13a1ce  jal         func_4E8738
label_1e14d8:
    if (ctx->pc == 0x1E14D8u) {
        ctx->pc = 0x1E14D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14D4u;
        // 0x1e14d8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E14DCu;
        goto label_1e14dc;
    }
    ctx->pc = 0x1E14D4u;
    SET_GPR_U32(ctx, 31, 0x1E14DCu);
    ctx->pc = 0x1E14D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E14D4u;
    // 0x1e14d8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8738u, 0x1E14D4u, 0x1E14DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E14DCu;
label_1e14dc:
    // 0x1e14dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e14e0:
    // 0x1e14e0: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1e14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1e14e4:
    // 0x1e14e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e14e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e14e8:
    // 0x1e14e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e14e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1e14ec:
    // 0x1e14ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e14f0:
    // 0x1e14f0: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1e14f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1e14f4:
    // 0x1e14f4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e14f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e14f8:
    // 0x1e14f8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1e14f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e14fc:
    // 0x1e14fc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1e1500:
    if (ctx->pc == 0x1E1500u) {
        ctx->pc = 0x1E1500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14FCu;
        // 0x1e1500: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1504u;
        goto label_1e1504;
    }
    ctx->pc = 0x1E14FCu;
    {
        const bool branch_taken_0x1e14fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14FCu;
        // 0x1e1500: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14fc) {
            ctx->pc = 0x1E1528u;
            goto label_1e1528;
        }
    }
    ctx->pc = 0x1E1504u;
label_1e1504:
    // 0x1e1504: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1e1504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1e1508:
    // 0x1e1508: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1e1508u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1e150c:
    // 0x1e150c: 0x24c66660  addiu       $a2, $a2, 0x6660
    ctx->pc = 0x1e150cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26208));
label_1e1510:
    // 0x1e1510: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1e1510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1e1514:
    // 0x1e1514: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1e1514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1e1518:
    // 0x1e1518: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1e1518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1e151c:
    // 0x1e151c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1e151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1e1520:
    // 0x1e1520: 0x60f809  jalr        $v1
label_1e1524:
    if (ctx->pc == 0x1E1524u) {
        ctx->pc = 0x1E1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1520u;
        // 0x1e1524: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1528u;
        goto label_1e1528;
    }
    ctx->pc = 0x1E1520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1528u);
        ctx->pc = 0x1E1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1520u;
        // 0x1e1524: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1520u, 0x1E1528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1528u;
label_1e1528:
    // 0x1e1528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e152c:
    // 0x1e152c: 0xc06a39e  jal         func_1A8E78
label_1e1530:
    if (ctx->pc == 0x1E1530u) {
        ctx->pc = 0x1E1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E152Cu;
        // 0x1e1530: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1534u;
        goto label_1e1534;
    }
    ctx->pc = 0x1E152Cu;
    SET_GPR_U32(ctx, 31, 0x1E1534u);
    ctx->pc = 0x1E1530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E152Cu;
    // 0x1e1530: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1E152Cu, 0x1E1534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1534u;
label_1e1534:
    // 0x1e1534: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e1534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e1538:
    // 0x1e1538: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e1538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e153c:
    // 0x1e153c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e153cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1540:
    // 0x1e1540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1544:
    // 0x1e1544: 0x3e00008  jr          $ra
label_1e1548:
    if (ctx->pc == 0x1E1548u) {
        ctx->pc = 0x1E1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1544u;
        // 0x1e1548: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E154Cu;
        goto label_1e154c;
    }
    ctx->pc = 0x1E1544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1544u;
        // 0x1e1548: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E154Cu;
label_1e154c:
    // 0x1e154c: 0x0  nop
    ctx->pc = 0x1e154cu;
    // NOP
    ctx->pc = 0x1e1550u;
}
