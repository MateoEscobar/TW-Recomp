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

// Function: sub_002B71D8
// Address: 0x2b71d8 - 0x2b7258
void sub_002B71D8_0x2b71d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B71D8_0x2b71d8");
#endif

    switch (ctx->pc) {
        case 0x2b71d8u: goto label_2b71d8;
        case 0x2b71dcu: goto label_2b71dc;
        case 0x2b71e0u: goto label_2b71e0;
        case 0x2b71e4u: goto label_2b71e4;
        case 0x2b71e8u: goto label_2b71e8;
        case 0x2b71ecu: goto label_2b71ec;
        case 0x2b71f0u: goto label_2b71f0;
        case 0x2b71f4u: goto label_2b71f4;
        case 0x2b71f8u: goto label_2b71f8;
        case 0x2b71fcu: goto label_2b71fc;
        case 0x2b7200u: goto label_2b7200;
        case 0x2b7204u: goto label_2b7204;
        case 0x2b7208u: goto label_2b7208;
        case 0x2b720cu: goto label_2b720c;
        case 0x2b7210u: goto label_2b7210;
        case 0x2b7214u: goto label_2b7214;
        case 0x2b7218u: goto label_2b7218;
        case 0x2b721cu: goto label_2b721c;
        case 0x2b7220u: goto label_2b7220;
        case 0x2b7224u: goto label_2b7224;
        case 0x2b7228u: goto label_2b7228;
        case 0x2b722cu: goto label_2b722c;
        case 0x2b7230u: goto label_2b7230;
        case 0x2b7234u: goto label_2b7234;
        case 0x2b7238u: goto label_2b7238;
        case 0x2b723cu: goto label_2b723c;
        case 0x2b7240u: goto label_2b7240;
        case 0x2b7244u: goto label_2b7244;
        case 0x2b7248u: goto label_2b7248;
        case 0x2b724cu: goto label_2b724c;
        case 0x2b7250u: goto label_2b7250;
        case 0x2b7254u: goto label_2b7254;
        default: break;
    }

    ctx->pc = 0x2b71d8u;

label_2b71d8:
    // 0x2b71d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b71d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b71dc:
    // 0x2b71dc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2b71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2b71e0:
    // 0x2b71e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b71e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2b71e4:
    // 0x2b71e4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2b71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2b71e8:
    // 0x2b71e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b71e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b71ec:
    // 0x2b71ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b71ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b71f0:
    // 0x2b71f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b71f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b71f4:
    // 0x2b71f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b71f8:
    // 0x2b71f8: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x2b71f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
label_2b71fc:
    // 0x2b71fc: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x2b71fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_2b7200:
    // 0x2b7200: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b7200u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2b7204:
    // 0x2b7204: 0xc13b782  jal         func_4EDE08
label_2b7208:
    if (ctx->pc == 0x2B7208u) {
        ctx->pc = 0x2B7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7204u;
        // 0x2b7208: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B720Cu;
        goto label_2b720c;
    }
    ctx->pc = 0x2B7204u;
    SET_GPR_U32(ctx, 31, 0x2B720Cu);
    ctx->pc = 0x2B7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7204u;
    // 0x2b7208: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2B7204u, 0x2B720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B720Cu;
label_2b720c:
    // 0x2b720c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b720cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2b7210:
    // 0x2b7210: 0xc0e409a  jal         func_390268
label_2b7214:
    if (ctx->pc == 0x2B7214u) {
        ctx->pc = 0x2B7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7210u;
        // 0x2b7214: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7218u;
        goto label_2b7218;
    }
    ctx->pc = 0x2B7210u;
    SET_GPR_U32(ctx, 31, 0x2B7218u);
    ctx->pc = 0x2B7214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7210u;
    // 0x2b7214: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B7210u, 0x2B7218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7218u;
label_2b7218:
    // 0x2b7218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b7218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b721c:
    // 0x2b721c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2b7220:
    if (ctx->pc == 0x2B7220u) {
        ctx->pc = 0x2B7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B721Cu;
        // 0x2b7220: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7224u;
        goto label_2b7224;
    }
    ctx->pc = 0x2B721Cu;
    {
        const bool branch_taken_0x2b721c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B721Cu;
        // 0x2b7220: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b721c) {
            ctx->pc = 0x2B7240u;
            goto label_2b7240;
        }
    }
    ctx->pc = 0x2B7224u;
label_2b7224:
    // 0x2b7224: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b7224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b7228:
    // 0x2b7228: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b7228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b722c:
    // 0x2b722c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b7230:
    // 0x2b7230: 0x40f809  jalr        $v0
label_2b7234:
    if (ctx->pc == 0x2B7234u) {
        ctx->pc = 0x2B7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7230u;
        // 0x2b7234: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7238u;
        goto label_2b7238;
    }
    ctx->pc = 0x2B7230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B7238u);
        ctx->pc = 0x2B7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7230u;
        // 0x2b7234: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7230u, 0x2B7238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B7238u;
label_2b7238:
    // 0x2b7238: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b723c:
    if (ctx->pc == 0x2B723Cu) {
        ctx->pc = 0x2B723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7238u;
        // 0x2b723c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7240u;
        goto label_2b7240;
    }
    ctx->pc = 0x2B7238u;
    {
        const bool branch_taken_0x2b7238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7238u;
        // 0x2b723c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7238) {
            ctx->pc = 0x2B7248u;
            goto label_2b7248;
        }
    }
    ctx->pc = 0x2B7240u;
label_2b7240:
    // 0x2b7240: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x2b7240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b7244:
    // 0x2b7244: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2b7244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2b7248:
    // 0x2b7248: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b7248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b724c:
    // 0x2b724c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b724cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b7250:
    // 0x2b7250: 0x3e00008  jr          $ra
label_2b7254:
    if (ctx->pc == 0x2B7254u) {
        ctx->pc = 0x2B7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7250u;
        // 0x2b7254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7258u;
        goto label_fallthrough_0x2b7250;
    }
    ctx->pc = 0x2B7250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7250u;
        // 0x2b7254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b7250:
    ctx->pc = 0x2B7258u;
}
