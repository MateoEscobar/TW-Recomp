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

// Function: sub_0014C448
// Address: 0x14c448 - 0x14c5c0
void sub_0014C448_0x14c448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C448_0x14c448");
#endif

    switch (ctx->pc) {
        case 0x14c484u: goto label_14c484;
        case 0x14c4c0u: goto label_14c4c0;
        default: break;
    }

    ctx->pc = 0x14c448u;

    // 0x14c448: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14c448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14c44c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x14c450: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14c454: 0x8ca2bd00  lw          $v0, -0x4300($a1)
    ctx->pc = 0x14c454u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50BD00u));
    // 0x14c458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c45c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C45Cu;
    {
        const bool branch_taken_0x14c45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C45Cu;
        // 0x14c460: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c45c) {
            ctx->pc = 0x14C478u;
            goto label_14c478;
        }
    }
    ctx->pc = 0x14C464u;
    // 0x14c464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c468: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x14c468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x14c46c: 0xaca3bd00  sw          $v1, -0x4300($a1)
    ctx->pc = 0x14c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950144), GPR_U32(ctx, 3));
    // 0x14c470: 0xae020824  sw          $v0, 0x824($s0)
    ctx->pc = 0x14c470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2084), GPR_U32(ctx, 2));
    // 0x14c474: 0xae030828  sw          $v1, 0x828($s0)
    ctx->pc = 0x14c474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 3));
label_14c478:
    // 0x14c478: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c47c: 0xc05420e  jal         func_150838
    ctx->pc = 0x14C47Cu;
    SET_GPR_U32(ctx, 31, 0x14C484u);
    ctx->pc = 0x14C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C47Cu;
    // 0x14c480: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14C47Cu, 0x14C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C484u;
label_14c484:
    // 0x14c484: 0x93a20007  lbu         $v0, 0x7($sp)
    ctx->pc = 0x14c484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x14c488: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x14c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x14c48c: 0x93ae0009  lbu         $t6, 0x9($sp)
    ctx->pc = 0x14c48cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    // 0x14c490: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14c490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c494: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14c494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14c498: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x14c498u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c49c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x14c49cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c4a0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x14c4a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c4a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x14c4a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4ac: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x14c4acu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14c4b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14c4b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14c4b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4bc: 0x0  nop
    ctx->pc = 0x14c4bcu;
    // NOP
label_14c4c0:
    // 0x14c4c0: 0x51a00004  beql        $t5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C4C0u;
    {
        const bool branch_taken_0x14c4c0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4c0) {
            ctx->pc = 0x14C4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C4C0u;
            // 0x14c4c4: 0x8e020828  lw          $v0, 0x828($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C4D4u;
            goto label_14c4d4;
        }
    }
    ctx->pc = 0x14C4C8u;
    // 0x14c4c8: 0x51c60009  beql        $t6, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x14C4C8u;
    {
        const bool branch_taken_0x14c4c8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        if (branch_taken_0x14c4c8) {
            ctx->pc = 0x14C4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C4C8u;
            // 0x14c4cc: 0x93a30007  lbu         $v1, 0x7($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C4F0u;
            goto label_14c4f0;
        }
    }
    ctx->pc = 0x14C4D0u;
    // 0x14c4d0: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x14c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
label_14c4d4:
    // 0x14c4d4: 0x50870001  beql        $a0, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C4D4u;
    {
        const bool branch_taken_0x14c4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x14c4d4) {
            ctx->pc = 0x14C4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C4D4u;
            // 0x14c4d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C4DCu;
            goto label_14c4dc;
        }
    }
    ctx->pc = 0x14C4DCu;
label_14c4dc:
    // 0x14c4dc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x14c4dcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14c4e0: 0x1810  mfhi        $v1
    ctx->pc = 0x14c4e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14c4e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c4e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14C4E8u;
    {
        const bool branch_taken_0x14c4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4E8u;
        // 0x14c4ec: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4e8) {
            ctx->pc = 0x14C538u;
            goto label_14c538;
        }
    }
    ctx->pc = 0x14C4F0u;
label_14c4f0:
    // 0x14c4f0: 0x10780014  beq         $v1, $t8, . + 4 + (0x14 << 2)
    ctx->pc = 0x14C4F0u;
    {
        const bool branch_taken_0x14c4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 24));
        ctx->pc = 0x14C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4F0u;
        // 0x14c4f4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4f0) {
            ctx->pc = 0x14C544u;
            goto label_14c544;
        }
    }
    ctx->pc = 0x14C4F8u;
    // 0x14c4f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C4F8u;
    {
        const bool branch_taken_0x14c4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4f8) {
            ctx->pc = 0x14C510u;
            goto label_14c510;
        }
    }
    ctx->pc = 0x14C500u;
    // 0x14c500: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C500u;
    {
        const bool branch_taken_0x14c500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c500) {
            ctx->pc = 0x14C504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C500u;
            // 0x14c504: 0x8e020828  lw          $v0, 0x828($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C520u;
            goto label_14c520;
        }
    }
    ctx->pc = 0x14C508u;
    // 0x14c508: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14C508u;
    {
        const bool branch_taken_0x14c508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C508u;
        // 0x14c50c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c508) {
            ctx->pc = 0x14C590u;
            goto label_14c590;
        }
    }
    ctx->pc = 0x14C510u;
label_14c510:
    // 0x14c510: 0x506c0016  beql        $v1, $t4, . + 4 + (0x16 << 2)
    ctx->pc = 0x14C510u;
    {
        const bool branch_taken_0x14c510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        if (branch_taken_0x14c510) {
            ctx->pc = 0x14C514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C510u;
            // 0x14c514: 0x8e020828  lw          $v0, 0x828($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C56Cu;
            goto label_14c56c;
        }
    }
    ctx->pc = 0x14C518u;
    // 0x14c518: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14C518u;
    {
        const bool branch_taken_0x14c518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C518u;
        // 0x14c51c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c518) {
            ctx->pc = 0x14C590u;
            goto label_14c590;
        }
    }
    ctx->pc = 0x14C520u;
label_14c520:
    // 0x14c520: 0x50870001  beql        $a0, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C520u;
    {
        const bool branch_taken_0x14c520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x14c520) {
            ctx->pc = 0x14C524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C520u;
            // 0x14c524: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C528u;
            goto label_14c528;
        }
    }
    ctx->pc = 0x14C528u;
label_14c528:
    // 0x14c528: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x14c528u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14c52c: 0x1810  mfhi        $v1
    ctx->pc = 0x14c52cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14c530: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c534: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x14c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_14c538:
    // 0x14c538: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14c538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14c53c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14C53Cu;
    {
        const bool branch_taken_0x14c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C53Cu;
        // 0x14c540: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c53c) {
            ctx->pc = 0x14C58Cu;
            goto label_14c58c;
        }
    }
    ctx->pc = 0x14C544u;
label_14c544:
    // 0x14c544: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x14c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x14c548: 0x50870001  beql        $a0, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C548u;
    {
        const bool branch_taken_0x14c548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x14c548) {
            ctx->pc = 0x14C54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C548u;
            // 0x14c54c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C550u;
            goto label_14c550;
        }
    }
    ctx->pc = 0x14C550u;
label_14c550:
    // 0x14c550: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x14c550u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14c554: 0x1810  mfhi        $v1
    ctx->pc = 0x14c554u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14c558: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c55c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x14c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x14c560: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14c564: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14C564u;
    {
        const bool branch_taken_0x14c564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C564u;
        // 0x14c568: 0xac6c0000  sw          $t4, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c564) {
            ctx->pc = 0x14C58Cu;
            goto label_14c58c;
        }
    }
    ctx->pc = 0x14C56Cu;
label_14c56c:
    // 0x14c56c: 0x50870001  beql        $a0, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C56Cu;
    {
        const bool branch_taken_0x14c56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x14c56c) {
            ctx->pc = 0x14C570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C56Cu;
            // 0x14c570: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C574u;
            goto label_14c574;
        }
    }
    ctx->pc = 0x14C574u;
label_14c574:
    // 0x14c574: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x14c574u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14c578: 0x1810  mfhi        $v1
    ctx->pc = 0x14c578u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14c57c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c580: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x14c580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x14c584: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14c584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14c588: 0xac6f0000  sw          $t7, 0x0($v1)
    ctx->pc = 0x14c588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 15));
label_14c58c:
    // 0x14c58c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14c58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_14c590:
    // 0x14c590: 0x256b00a0  addiu       $t3, $t3, 0xA0
    ctx->pc = 0x14c590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 160));
    // 0x14c594: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x14c594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
    // 0x14c598: 0x252900a0  addiu       $t1, $t1, 0xA0
    ctx->pc = 0x14c598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
    // 0x14c59c: 0x28c2000d  slti        $v0, $a2, 0xD
    ctx->pc = 0x14c59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x14c5a0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x14C5A0u;
    {
        const bool branch_taken_0x14c5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5A0u;
        // 0x14c5a4: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5a0) {
            ctx->pc = 0x14C4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c4c0;
        }
    }
    ctx->pc = 0x14C5A8u;
    // 0x14c5a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14c5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14c5ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14c5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x14C5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5B0u;
        // 0x14c5b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C5B8u;
    // 0x14c5b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14c5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14c5bc: 0x0  nop
    ctx->pc = 0x14c5bcu;
    // NOP
    ctx->pc = 0x14c5c0u;
}
