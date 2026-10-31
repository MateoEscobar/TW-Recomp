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

// Function: sub_0028C0C8
// Address: 0x28c0c8 - 0x28c140
void sub_0028C0C8_0x28c0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C0C8_0x28c0c8");
#endif

    switch (ctx->pc) {
        case 0x28c0c8u: goto label_28c0c8;
        case 0x28c0ccu: goto label_28c0cc;
        case 0x28c0d0u: goto label_28c0d0;
        case 0x28c0d4u: goto label_28c0d4;
        case 0x28c0d8u: goto label_28c0d8;
        case 0x28c0dcu: goto label_28c0dc;
        case 0x28c0e0u: goto label_28c0e0;
        case 0x28c0e4u: goto label_28c0e4;
        case 0x28c0e8u: goto label_28c0e8;
        case 0x28c0ecu: goto label_28c0ec;
        case 0x28c0f0u: goto label_28c0f0;
        case 0x28c0f4u: goto label_28c0f4;
        case 0x28c0f8u: goto label_28c0f8;
        case 0x28c0fcu: goto label_28c0fc;
        case 0x28c100u: goto label_28c100;
        case 0x28c104u: goto label_28c104;
        case 0x28c108u: goto label_28c108;
        case 0x28c10cu: goto label_28c10c;
        case 0x28c110u: goto label_28c110;
        case 0x28c114u: goto label_28c114;
        case 0x28c118u: goto label_28c118;
        case 0x28c11cu: goto label_28c11c;
        case 0x28c120u: goto label_28c120;
        case 0x28c124u: goto label_28c124;
        case 0x28c128u: goto label_28c128;
        case 0x28c12cu: goto label_28c12c;
        case 0x28c130u: goto label_28c130;
        case 0x28c134u: goto label_28c134;
        case 0x28c138u: goto label_28c138;
        case 0x28c13cu: goto label_28c13c;
        default: break;
    }

    ctx->pc = 0x28c0c8u;

label_28c0c8:
    // 0x28c0c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28c0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28c0cc:
    // 0x28c0cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28c0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_28c0d0:
    // 0x28c0d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28c0d4:
    // 0x28c0d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28c0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c0d8:
    // 0x28c0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28c0dc:
    // 0x28c0dc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_28c0e0:
    if (ctx->pc == 0x28C0E0u) {
        ctx->pc = 0x28C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0DCu;
        // 0x28c0e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0E4u;
        goto label_28c0e4;
    }
    ctx->pc = 0x28C0DCu;
    {
        const bool branch_taken_0x28c0dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0DCu;
        // 0x28c0e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0dc) {
            ctx->pc = 0x28C114u;
            goto label_28c114;
        }
    }
    ctx->pc = 0x28C0E4u;
label_28c0e4:
    // 0x28c0e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28c0e8:
    // 0x28c0e8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28c0e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28c0ec:
    // 0x28c0ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28c0f0:
    // 0x28c0f0: 0x40f809  jalr        $v0
label_28c0f4:
    if (ctx->pc == 0x28C0F4u) {
        ctx->pc = 0x28C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0F0u;
        // 0x28c0f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0F8u;
        goto label_28c0f8;
    }
    ctx->pc = 0x28C0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C0F8u);
        ctx->pc = 0x28C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0F0u;
        // 0x28c0f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C0F0u, 0x28C0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C0F8u;
label_28c0f8:
    // 0x28c0f8: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x28c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
label_28c0fc:
    // 0x28c0fc: 0xc087502  jal         func_21D408
label_28c100:
    if (ctx->pc == 0x28C100u) {
        ctx->pc = 0x28C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0FCu;
        // 0x28c100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C104u;
        goto label_28c104;
    }
    ctx->pc = 0x28C0FCu;
    SET_GPR_U32(ctx, 31, 0x28C104u);
    ctx->pc = 0x28C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C0FCu;
    // 0x28c100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28C0FCu, 0x28C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C104u;
label_28c104:
    // 0x28c104: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x28c104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_28c108:
    // 0x28c108: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x28c108u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_28c10c:
    // 0x28c10c: 0x10000006  b           . + 4 + (0x6 << 2)
label_28c110:
    if (ctx->pc == 0x28C110u) {
        ctx->pc = 0x28C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C10Cu;
        // 0x28c110: 0xa2220264  sb          $v0, 0x264($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 612), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C114u;
        goto label_28c114;
    }
    ctx->pc = 0x28C10Cu;
    {
        const bool branch_taken_0x28c10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C10Cu;
        // 0x28c110: 0xa2220264  sb          $v0, 0x264($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 612), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c10c) {
            ctx->pc = 0x28C128u;
            goto label_28c128;
        }
    }
    ctx->pc = 0x28C114u;
label_28c114:
    // 0x28c114: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x28c114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_28c118:
    // 0x28c118: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28c118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28c11c:
    // 0x28c11c: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x28c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_28c120:
    // 0x28c120: 0xa2230264  sb          $v1, 0x264($s1)
    ctx->pc = 0x28c120u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 612), (uint8_t)GPR_U32(ctx, 3));
label_28c124:
    // 0x28c124: 0xae240260  sw          $a0, 0x260($s1)
    ctx->pc = 0x28c124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 4));
label_28c128:
    // 0x28c128: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28c128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28c12c:
    // 0x28c12c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c12cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c130:
    // 0x28c130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28c130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28c134:
    // 0x28c134: 0x3e00008  jr          $ra
label_28c138:
    if (ctx->pc == 0x28C138u) {
        ctx->pc = 0x28C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C134u;
        // 0x28c138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C13Cu;
        goto label_28c13c;
    }
    ctx->pc = 0x28C134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C134u;
        // 0x28c138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C13Cu;
label_28c13c:
    // 0x28c13c: 0x0  nop
    ctx->pc = 0x28c13cu;
    // NOP
    ctx->pc = 0x28c140u;
}
