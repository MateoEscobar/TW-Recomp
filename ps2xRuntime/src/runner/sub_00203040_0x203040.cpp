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

// Function: sub_00203040
// Address: 0x203040 - 0x2030c0
void sub_00203040_0x203040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203040_0x203040");
#endif

    switch (ctx->pc) {
        case 0x203040u: goto label_203040;
        case 0x203044u: goto label_203044;
        case 0x203048u: goto label_203048;
        case 0x20304cu: goto label_20304c;
        case 0x203050u: goto label_203050;
        case 0x203054u: goto label_203054;
        case 0x203058u: goto label_203058;
        case 0x20305cu: goto label_20305c;
        case 0x203060u: goto label_203060;
        case 0x203064u: goto label_203064;
        case 0x203068u: goto label_203068;
        case 0x20306cu: goto label_20306c;
        case 0x203070u: goto label_203070;
        case 0x203074u: goto label_203074;
        case 0x203078u: goto label_203078;
        case 0x20307cu: goto label_20307c;
        case 0x203080u: goto label_203080;
        case 0x203084u: goto label_203084;
        case 0x203088u: goto label_203088;
        case 0x20308cu: goto label_20308c;
        case 0x203090u: goto label_203090;
        case 0x203094u: goto label_203094;
        case 0x203098u: goto label_203098;
        case 0x20309cu: goto label_20309c;
        case 0x2030a0u: goto label_2030a0;
        case 0x2030a4u: goto label_2030a4;
        case 0x2030a8u: goto label_2030a8;
        case 0x2030acu: goto label_2030ac;
        case 0x2030b0u: goto label_2030b0;
        case 0x2030b4u: goto label_2030b4;
        case 0x2030b8u: goto label_2030b8;
        case 0x2030bcu: goto label_2030bc;
        default: break;
    }

    ctx->pc = 0x203040u;

label_203040:
    // 0x203040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_203044:
    // 0x203044: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x203044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_203048:
    // 0x203048: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x203048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20304c:
    // 0x20304c: 0x24060254  addiu       $a2, $zero, 0x254
    ctx->pc = 0x20304cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
label_203050:
    // 0x203050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_203054:
    // 0x203054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203058:
    // 0x203058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20305c:
    // 0x20305c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20305cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203060:
    // 0x203060: 0x24a5ef80  addiu       $a1, $a1, -0x1080
    ctx->pc = 0x203060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963072));
label_203064:
    // 0x203064: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x203064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203068:
    // 0x203068: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x203068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20306c:
    // 0x20306c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_203070:
    // 0x203070: 0x40f809  jalr        $v0
label_203074:
    if (ctx->pc == 0x203074u) {
        ctx->pc = 0x203074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203070u;
        // 0x203074: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203078u;
        goto label_203078;
    }
    ctx->pc = 0x203070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203078u);
        ctx->pc = 0x203074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203070u;
        // 0x203074: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203070u, 0x203078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203078u;
label_203078:
    // 0x203078: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x203078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20307c:
    // 0x20307c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20307cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_203080:
    // 0x203080: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x203080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_203084:
    // 0x203084: 0x0  nop
    ctx->pc = 0x203084u;
    // NOP
label_203088:
    // 0x203088: 0x0  nop
    ctx->pc = 0x203088u;
    // NOP
label_20308c:
    // 0x20308c: 0x0  nop
    ctx->pc = 0x20308cu;
    // NOP
label_203090:
    // 0x203090: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_203094:
    if (ctx->pc == 0x203094u) {
        ctx->pc = 0x203094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203090u;
        // 0x203094: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203098u;
        goto label_203098;
    }
    ctx->pc = 0x203090u;
    {
        const bool branch_taken_0x203090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203090u;
        // 0x203094: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203090) {
            ctx->pc = 0x203080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203080;
        }
    }
    ctx->pc = 0x203098u;
label_203098:
    // 0x203098: 0xc080bac  jal         func_202EB0
label_20309c:
    if (ctx->pc == 0x20309Cu) {
        ctx->pc = 0x20309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203098u;
        // 0x20309c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2030A0u;
        goto label_2030a0;
    }
    ctx->pc = 0x203098u;
    SET_GPR_U32(ctx, 31, 0x2030A0u);
    ctx->pc = 0x20309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203098u;
    // 0x20309c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202EB0u, 0x203098u, 0x2030A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030A0u;
label_2030a0:
    // 0x2030a0: 0x2622ef80  addiu       $v0, $s1, -0x1080
    ctx->pc = 0x2030a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963072));
label_2030a4:
    // 0x2030a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2030a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2030a8:
    // 0x2030a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2030a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2030ac:
    // 0x2030ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2030acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2030b0:
    // 0x2030b0: 0xac400250  sw          $zero, 0x250($v0)
    ctx->pc = 0x2030b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 0));
label_2030b4:
    // 0x2030b4: 0x3e00008  jr          $ra
label_2030b8:
    if (ctx->pc == 0x2030B8u) {
        ctx->pc = 0x2030B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030B4u;
        // 0x2030b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2030BCu;
        goto label_2030bc;
    }
    ctx->pc = 0x2030B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2030B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030B4u;
        // 0x2030b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2030B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2030BCu;
label_2030bc:
    // 0x2030bc: 0x0  nop
    ctx->pc = 0x2030bcu;
    // NOP
    ctx->pc = 0x2030c0u;
}
