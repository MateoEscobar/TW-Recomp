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

// Function: sub_00329238
// Address: 0x329238 - 0x3292e0
void sub_00329238_0x329238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329238_0x329238");
#endif

    switch (ctx->pc) {
        case 0x329238u: goto label_329238;
        case 0x32923cu: goto label_32923c;
        case 0x329240u: goto label_329240;
        case 0x329244u: goto label_329244;
        case 0x329248u: goto label_329248;
        case 0x32924cu: goto label_32924c;
        case 0x329250u: goto label_329250;
        case 0x329254u: goto label_329254;
        case 0x329258u: goto label_329258;
        case 0x32925cu: goto label_32925c;
        case 0x329260u: goto label_329260;
        case 0x329264u: goto label_329264;
        case 0x329268u: goto label_329268;
        case 0x32926cu: goto label_32926c;
        case 0x329270u: goto label_329270;
        case 0x329274u: goto label_329274;
        case 0x329278u: goto label_329278;
        case 0x32927cu: goto label_32927c;
        case 0x329280u: goto label_329280;
        case 0x329284u: goto label_329284;
        case 0x329288u: goto label_329288;
        case 0x32928cu: goto label_32928c;
        case 0x329290u: goto label_329290;
        case 0x329294u: goto label_329294;
        case 0x329298u: goto label_329298;
        case 0x32929cu: goto label_32929c;
        case 0x3292a0u: goto label_3292a0;
        case 0x3292a4u: goto label_3292a4;
        case 0x3292a8u: goto label_3292a8;
        case 0x3292acu: goto label_3292ac;
        case 0x3292b0u: goto label_3292b0;
        case 0x3292b4u: goto label_3292b4;
        case 0x3292b8u: goto label_3292b8;
        case 0x3292bcu: goto label_3292bc;
        case 0x3292c0u: goto label_3292c0;
        case 0x3292c4u: goto label_3292c4;
        case 0x3292c8u: goto label_3292c8;
        case 0x3292ccu: goto label_3292cc;
        case 0x3292d0u: goto label_3292d0;
        case 0x3292d4u: goto label_3292d4;
        case 0x3292d8u: goto label_3292d8;
        case 0x3292dcu: goto label_3292dc;
        default: break;
    }

    ctx->pc = 0x329238u;

label_329238:
    // 0x329238: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x329238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_32923c:
    // 0x32923c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x32923cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_329240:
    // 0x329240: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x329240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_329244:
    // 0x329244: 0xafa500f4  sw          $a1, 0xF4($sp)
    ctx->pc = 0x329244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 5));
label_329248:
    // 0x329248: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x329248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_32924c:
    // 0x32924c: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x32924cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
label_329250:
    // 0x329250: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x329250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_329254:
    // 0x329254: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x329254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_329258:
    // 0x329258: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x329258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32925c:
    // 0x32925c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_329260:
    // 0x329260: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x329260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_329264:
    // 0x329264: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x329264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_329268:
    // 0x329268: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x329268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_32926c:
    // 0x32926c: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x32926cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_329270:
    // 0x329270: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x329270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_329274:
    // 0x329274: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x329274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_329278:
    // 0x329278: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x329278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_32927c:
    // 0x32927c: 0xc10c228  jal         func_4308A0
label_329280:
    if (ctx->pc == 0x329280u) {
        ctx->pc = 0x329280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32927Cu;
        // 0x329280: 0xac7d0014  sw          $sp, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329284u;
        goto label_329284;
    }
    ctx->pc = 0x32927Cu;
    SET_GPR_U32(ctx, 31, 0x329284u);
    ctx->pc = 0x329280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32927Cu;
    // 0x329280: 0xac7d0014  sw          $sp, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4308A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4308A0u, 0x32927Cu, 0x329284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329284u;
label_329284:
    // 0x329284: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_329288:
    if (ctx->pc == 0x329288u) {
        ctx->pc = 0x329288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329284u;
        // 0x329288: 0x8fa40104  lw          $a0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32928Cu;
        goto label_32928c;
    }
    ctx->pc = 0x329284u;
    {
        const bool branch_taken_0x329284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329284u;
        // 0x329288: 0x8fa40104  lw          $a0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329284) {
            ctx->pc = 0x3292A4u;
            goto label_3292a4;
        }
    }
    ctx->pc = 0x32928Cu;
label_32928c:
    // 0x32928c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x32928cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_329290:
    // 0x329290: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x329290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_329294:
    // 0x329294: 0x40f809  jalr        $v0
label_329298:
    if (ctx->pc == 0x329298u) {
        ctx->pc = 0x329298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329294u;
        // 0x329298: 0x8fa400f0  lw          $a0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32929Cu;
        goto label_32929c;
    }
    ctx->pc = 0x329294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32929Cu);
        ctx->pc = 0x329298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329294u;
        // 0x329298: 0x8fa400f0  lw          $a0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329294u, 0x32929Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32929Cu;
label_32929c:
    // 0x32929c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3292a0:
    if (ctx->pc == 0x3292A0u) {
        ctx->pc = 0x3292A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32929Cu;
        // 0x3292a0: 0x8fa300e0  lw          $v1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3292A4u;
        goto label_3292a4;
    }
    ctx->pc = 0x32929Cu;
    {
        const bool branch_taken_0x32929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3292A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32929Cu;
        // 0x3292a0: 0x8fa300e0  lw          $v1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32929c) {
            ctx->pc = 0x3292C8u;
            goto label_3292c8;
        }
    }
    ctx->pc = 0x3292A4u;
label_3292a4:
    // 0x3292a4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x3292a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3292a8:
    // 0x3292a8: 0xac64006c  sw          $a0, 0x6C($v1)
    ctx->pc = 0x3292a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 4));
label_3292ac:
    // 0x3292ac: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x3292acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3292b0:
    // 0x3292b0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3292b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3292b4:
    // 0x3292b4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x3292b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_3292b8:
    // 0x3292b8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x3292b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_3292bc:
    // 0x3292bc: 0xc0ca1f8  jal         func_3287E0
label_3292c0:
    if (ctx->pc == 0x3292C0u) {
        ctx->pc = 0x3292C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292BCu;
        // 0x3292c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3292C4u;
        goto label_3292c4;
    }
    ctx->pc = 0x3292BCu;
    SET_GPR_U32(ctx, 31, 0x3292C4u);
    ctx->pc = 0x3292C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292BCu;
    // 0x3292c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3287E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3287E0u, 0x3292BCu, 0x3292C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292C4u;
label_3292c4:
    // 0x3292c4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x3292c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3292c8:
    // 0x3292c8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x3292c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3292cc:
    // 0x3292cc: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x3292ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_3292d0:
    // 0x3292d0: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x3292d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_3292d4:
    // 0x3292d4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3292d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_3292d8:
    // 0x3292d8: 0x3e00008  jr          $ra
label_3292dc:
    if (ctx->pc == 0x3292DCu) {
        ctx->pc = 0x3292DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292D8u;
        // 0x3292dc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3292E0u;
        goto label_fallthrough_0x3292d8;
    }
    ctx->pc = 0x3292D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3292DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292D8u;
        // 0x3292dc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3292D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3292d8:
    ctx->pc = 0x3292E0u;
}
