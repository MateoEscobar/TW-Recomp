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

// Function: sub_004E81A0
// Address: 0x4e81a0 - 0x4e8240
void sub_004E81A0_0x4e81a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E81A0_0x4e81a0");
#endif

    switch (ctx->pc) {
        case 0x4e81a0u: goto label_4e81a0;
        case 0x4e81a4u: goto label_4e81a4;
        case 0x4e81a8u: goto label_4e81a8;
        case 0x4e81acu: goto label_4e81ac;
        case 0x4e81b0u: goto label_4e81b0;
        case 0x4e81b4u: goto label_4e81b4;
        case 0x4e81b8u: goto label_4e81b8;
        case 0x4e81bcu: goto label_4e81bc;
        case 0x4e81c0u: goto label_4e81c0;
        case 0x4e81c4u: goto label_4e81c4;
        case 0x4e81c8u: goto label_4e81c8;
        case 0x4e81ccu: goto label_4e81cc;
        case 0x4e81d0u: goto label_4e81d0;
        case 0x4e81d4u: goto label_4e81d4;
        case 0x4e81d8u: goto label_4e81d8;
        case 0x4e81dcu: goto label_4e81dc;
        case 0x4e81e0u: goto label_4e81e0;
        case 0x4e81e4u: goto label_4e81e4;
        case 0x4e81e8u: goto label_4e81e8;
        case 0x4e81ecu: goto label_4e81ec;
        case 0x4e81f0u: goto label_4e81f0;
        case 0x4e81f4u: goto label_4e81f4;
        case 0x4e81f8u: goto label_4e81f8;
        case 0x4e81fcu: goto label_4e81fc;
        case 0x4e8200u: goto label_4e8200;
        case 0x4e8204u: goto label_4e8204;
        case 0x4e8208u: goto label_4e8208;
        case 0x4e820cu: goto label_4e820c;
        case 0x4e8210u: goto label_4e8210;
        case 0x4e8214u: goto label_4e8214;
        case 0x4e8218u: goto label_4e8218;
        case 0x4e821cu: goto label_4e821c;
        case 0x4e8220u: goto label_4e8220;
        case 0x4e8224u: goto label_4e8224;
        case 0x4e8228u: goto label_4e8228;
        case 0x4e822cu: goto label_4e822c;
        case 0x4e8230u: goto label_4e8230;
        case 0x4e8234u: goto label_4e8234;
        case 0x4e8238u: goto label_4e8238;
        case 0x4e823cu: goto label_4e823c;
        default: break;
    }

    ctx->pc = 0x4e81a0u;

label_4e81a0:
    // 0x4e81a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e81a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e81a4:
    // 0x4e81a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e81a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e81a8:
    // 0x4e81a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e81a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e81ac:
    // 0x4e81ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e81acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e81b0:
    // 0x4e81b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e81b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e81b4:
    // 0x4e81b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e81b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e81b8:
    // 0x4e81b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e81b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e81bc:
    // 0x4e81bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4e81bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e81c0:
    // 0x4e81c0: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_4e81c4:
    if (ctx->pc == 0x4E81C4u) {
        ctx->pc = 0x4E81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E81C0u;
        // 0x4e81c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E81C8u;
        goto label_4e81c8;
    }
    ctx->pc = 0x4E81C0u;
    {
        const bool branch_taken_0x4e81c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E81C0u;
        // 0x4e81c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e81c0) {
            ctx->pc = 0x4E8220u;
            goto label_4e8220;
        }
    }
    ctx->pc = 0x4E81C8u;
label_4e81c8:
    // 0x4e81c8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x4e81c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_4e81cc:
    // 0x4e81cc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4e81ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_4e81d0:
    // 0x4e81d0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4e81d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4e81d4:
    // 0x4e81d4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e81d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e81d8:
    // 0x4e81d8: 0x8e0827e4  lw          $t0, 0x27E4($s0)
    ctx->pc = 0x4e81d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_4e81dc:
    // 0x4e81dc: 0x24c65a20  addiu       $a2, $a2, 0x5A20
    ctx->pc = 0x4e81dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23072));
label_4e81e0:
    // 0x4e81e0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e81e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e81e4:
    // 0x4e81e4: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x4e81e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_4e81e8:
    // 0x4e81e8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e81ec:
    // 0x4e81ec: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e81ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e81f0:
    // 0x4e81f0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e81f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e81f4:
    // 0x4e81f4: 0x60f809  jalr        $v1
label_4e81f8:
    if (ctx->pc == 0x4E81F8u) {
        ctx->pc = 0x4E81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E81F4u;
        // 0x4e81f8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E81FCu;
        goto label_4e81fc;
    }
    ctx->pc = 0x4E81F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E81FCu);
        ctx->pc = 0x4E81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E81F4u;
        // 0x4e81f8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E81F4u, 0x4E81FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E81FCu;
label_4e81fc:
    // 0x4e81fc: 0x8e0827e4  lw          $t0, 0x27E4($s0)
    ctx->pc = 0x4e81fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_4e8200:
    // 0x4e8200: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4e8200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e8204:
    // 0x4e8204: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4e8204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e8208:
    // 0x4e8208: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4e8208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e820c:
    // 0x4e820c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e8210:
    // 0x4e8210: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e8210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e8214:
    // 0x4e8214: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e8214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e8218:
    // 0x4e8218: 0x60f809  jalr        $v1
label_4e821c:
    if (ctx->pc == 0x4E821Cu) {
        ctx->pc = 0x4E821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8218u;
        // 0x4e821c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8220u;
        goto label_4e8220;
    }
    ctx->pc = 0x4E8218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E8220u);
        ctx->pc = 0x4E821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8218u;
        // 0x4e821c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8218u, 0x4E8220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E8220u;
label_4e8220:
    // 0x4e8220: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e8220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e8224:
    // 0x4e8224: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e8224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e8228:
    // 0x4e8228: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e8228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e822c:
    // 0x4e822c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e822cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8230:
    // 0x4e8230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e8230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8234:
    // 0x4e8234: 0x3e00008  jr          $ra
label_4e8238:
    if (ctx->pc == 0x4E8238u) {
        ctx->pc = 0x4E8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8234u;
        // 0x4e8238: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E823Cu;
        goto label_4e823c;
    }
    ctx->pc = 0x4E8234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8234u;
        // 0x4e8238: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E823Cu;
label_4e823c:
    // 0x4e823c: 0x0  nop
    ctx->pc = 0x4e823cu;
    // NOP
    ctx->pc = 0x4e8240u;
}
