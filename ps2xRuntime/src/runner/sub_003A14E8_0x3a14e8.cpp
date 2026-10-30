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

// Function: sub_003A14E8
// Address: 0x3a14e8 - 0x3a1540
void sub_003A14E8_0x3a14e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A14E8_0x3a14e8");
#endif

    switch (ctx->pc) {
        case 0x3a14e8u: goto label_3a14e8;
        case 0x3a14ecu: goto label_3a14ec;
        case 0x3a14f0u: goto label_3a14f0;
        case 0x3a14f4u: goto label_3a14f4;
        case 0x3a14f8u: goto label_3a14f8;
        case 0x3a14fcu: goto label_3a14fc;
        case 0x3a1500u: goto label_3a1500;
        case 0x3a1504u: goto label_3a1504;
        case 0x3a1508u: goto label_3a1508;
        case 0x3a150cu: goto label_3a150c;
        case 0x3a1510u: goto label_3a1510;
        case 0x3a1514u: goto label_3a1514;
        case 0x3a1518u: goto label_3a1518;
        case 0x3a151cu: goto label_3a151c;
        case 0x3a1520u: goto label_3a1520;
        case 0x3a1524u: goto label_3a1524;
        case 0x3a1528u: goto label_3a1528;
        case 0x3a152cu: goto label_3a152c;
        case 0x3a1530u: goto label_3a1530;
        case 0x3a1534u: goto label_3a1534;
        case 0x3a1538u: goto label_3a1538;
        case 0x3a153cu: goto label_3a153c;
        default: break;
    }

    ctx->pc = 0x3a14e8u;

label_3a14e8:
    // 0x3a14e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a14e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a14ec:
    // 0x3a14ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a14ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a14f0:
    // 0x3a14f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a14f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a14f4:
    // 0x3a14f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a14f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a14f8:
    // 0x3a14f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a14f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a14fc:
    // 0x3a14fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a14fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1500:
    // 0x3a1500: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3a1500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3a1504:
    // 0x3a1504: 0x8e0500fc  lw          $a1, 0xFC($s0)
    ctx->pc = 0x3a1504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_3a1508:
    // 0x3a1508: 0xc072b1e  jal         func_1CAC78
label_3a150c:
    if (ctx->pc == 0x3A150Cu) {
        ctx->pc = 0x3A150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1508u;
        // 0x3a150c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1510u;
        goto label_3a1510;
    }
    ctx->pc = 0x3A1508u;
    SET_GPR_U32(ctx, 31, 0x3A1510u);
    ctx->pc = 0x3A150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1508u;
    // 0x3a150c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAC78u, 0x3A1508u, 0x3A1510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1510u;
label_3a1510:
    // 0x3a1510: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a1510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1514:
    // 0x3a1514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a1514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1518:
    // 0x3a1518: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x3a1518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_3a151c:
    // 0x3a151c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x3a151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_3a1520:
    // 0x3a1520: 0x60f809  jalr        $v1
label_3a1524:
    if (ctx->pc == 0x3A1524u) {
        ctx->pc = 0x3A1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1520u;
        // 0x3a1524: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1528u;
        goto label_3a1528;
    }
    ctx->pc = 0x3A1520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1528u);
        ctx->pc = 0x3A1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1520u;
        // 0x3a1524: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1520u, 0x3A1528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1528u;
label_3a1528:
    // 0x3a1528: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a1528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a152c:
    // 0x3a152c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a152cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1530:
    // 0x3a1530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1534:
    // 0x3a1534: 0x3e00008  jr          $ra
label_3a1538:
    if (ctx->pc == 0x3A1538u) {
        ctx->pc = 0x3A1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1534u;
        // 0x3a1538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A153Cu;
        goto label_3a153c;
    }
    ctx->pc = 0x3A1534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1534u;
        // 0x3a1538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A153Cu;
label_3a153c:
    // 0x3a153c: 0x0  nop
    ctx->pc = 0x3a153cu;
    // NOP
    ctx->pc = 0x3a1540u;
}
