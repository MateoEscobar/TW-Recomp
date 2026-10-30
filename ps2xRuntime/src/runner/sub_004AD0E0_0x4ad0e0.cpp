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

// Function: sub_004AD0E0
// Address: 0x4ad0e0 - 0x4ad180
void sub_004AD0E0_0x4ad0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD0E0_0x4ad0e0");
#endif

    switch (ctx->pc) {
        case 0x4ad120u: goto label_4ad120;
        case 0x4ad164u: goto label_4ad164;
        default: break;
    }

    ctx->pc = 0x4ad0e0u;

    // 0x4ad0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ad0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ad0e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ad0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ad0e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad0ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ad0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ad0f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad0f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ad0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad0f8: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ad0f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ad0fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD0FCu;
    {
        const bool branch_taken_0x4ad0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD0FCu;
        // 0x4ad100: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad0fc) {
            ctx->pc = 0x4AD10Cu;
            goto label_4ad10c;
        }
    }
    ctx->pc = 0x4AD104u;
    // 0x4ad104: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD104u;
    {
        const bool branch_taken_0x4ad104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD104u;
        // 0x4ad108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad104) {
            ctx->pc = 0x4AD124u;
            goto label_4ad124;
        }
    }
    ctx->pc = 0x4AD10Cu;
label_4ad10c:
    // 0x4ad10c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4ad10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ad110: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD110u;
    {
        const bool branch_taken_0x4ad110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD110u;
        // 0x4ad114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad110) {
            ctx->pc = 0x4AD124u;
            goto label_4ad124;
        }
    }
    ctx->pc = 0x4AD118u;
    // 0x4ad118: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AD118u;
    SET_GPR_U32(ctx, 31, 0x4AD120u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AD118u, 0x4AD120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD120u;
label_4ad120:
    // 0x4ad120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad124:
    // 0x4ad124: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4AD124u;
    {
        const bool branch_taken_0x4ad124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD124u;
        // 0x4ad128: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad124) {
            ctx->pc = 0x4AD168u;
            goto label_4ad168;
        }
    }
    ctx->pc = 0x4AD12Cu;
    // 0x4ad12c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ad12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad130: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AD130u;
    {
        const bool branch_taken_0x4ad130 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4AD134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD130u;
        // 0x4ad134: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad130) {
            ctx->pc = 0x4AD154u;
            goto label_4ad154;
        }
    }
    ctx->pc = 0x4AD138u;
    // 0x4ad138: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad13c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ad13cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4ad140: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x4ad140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x4ad144: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD144u;
    {
        const bool branch_taken_0x4ad144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad144) {
            ctx->pc = 0x4AD148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD144u;
            // 0x4ad148: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD158u;
            goto label_4ad158;
        }
    }
    ctx->pc = 0x4AD14Cu;
    // 0x4ad14c: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4ad14cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4ad150: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4ad150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ad154:
    // 0x4ad154: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4ad154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_4ad158:
    // 0x4ad158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ad158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad15c: 0xc12b350  jal         func_4ACD40
    ctx->pc = 0x4AD15Cu;
    SET_GPR_U32(ctx, 31, 0x4AD164u);
    ctx->pc = 0x4AD160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD15Cu;
    // 0x4ad160: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACD40u, 0x4AD15Cu, 0x4AD164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD164u;
label_4ad164:
    // 0x4ad164: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad168:
    // 0x4ad168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ad168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad16c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ad16cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad174: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD174u;
        // 0x4ad178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD17Cu;
    // 0x4ad17c: 0x0  nop
    ctx->pc = 0x4ad17cu;
    // NOP
    ctx->pc = 0x4ad180u;
}
