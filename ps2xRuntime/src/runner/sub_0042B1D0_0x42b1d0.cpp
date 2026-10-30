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

// Function: sub_0042B1D0
// Address: 0x42b1d0 - 0x42b2b0
void sub_0042B1D0_0x42b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B1D0_0x42b1d0");
#endif

    switch (ctx->pc) {
        case 0x42b234u: goto label_42b234;
        case 0x42b240u: goto label_42b240;
        case 0x42b24cu: goto label_42b24c;
        case 0x42b26cu: goto label_42b26c;
        case 0x42b284u: goto label_42b284;
        case 0x42b290u: goto label_42b290;
        case 0x42b298u: goto label_42b298;
        default: break;
    }

    ctx->pc = 0x42b1d0u;

    // 0x42b1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x42b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x42b1d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x42b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42b1d8: 0x31afa  dsrl        $v1, $v1, 11
    ctx->pc = 0x42b1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 11);
    // 0x42b1dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x42b1e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42b1e4: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x42b1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x42b1e8: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x42b1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x42b1ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42b1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b1f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x42b1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x42b1f4: 0x223182d  daddu       $v1, $s1, $v1
    ctx->pc = 0x42b1f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x42b1f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x42b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x42b1fc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x42b1fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x42b200: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42B200u;
    {
        const bool branch_taken_0x42b200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B200u;
        // 0x42b204: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b200) {
            ctx->pc = 0x42B220u;
            goto label_42b220;
        }
    }
    ctx->pc = 0x42B208u;
    // 0x42b208: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x42b208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x42b20c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42b20cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x42b210: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x42b210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x42b214: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x42B214u;
    {
        const bool branch_taken_0x42b214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B214u;
        // 0x42b218: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b214) {
            ctx->pc = 0x42B220u;
            goto label_42b220;
        }
    }
    ctx->pc = 0x42B21Cu;
    // 0x42b21c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x42b21cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_42b220:
    // 0x42b220: 0x341081e0  ori         $s0, $zero, 0x81E0
    ctx->pc = 0x42b220u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x42b224: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x42b224u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x42b228: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x42b228u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x42b22c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x42B22Cu;
    SET_GPR_U32(ctx, 31, 0x42B234u);
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x42B22Cu, 0x42B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B234u;
label_42b234:
    // 0x42b234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42b234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b238: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x42B238u;
    SET_GPR_U32(ctx, 31, 0x42B240u);
    ctx->pc = 0x42B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B238u;
    // 0x42b23c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x42B238u, 0x42B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B240u;
label_42b240:
    // 0x42b240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42b240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b244: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x42B244u;
    SET_GPR_U32(ctx, 31, 0x42B24Cu);
    ctx->pc = 0x42B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B244u;
    // 0x42b248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x42B244u, 0x42B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B24Cu;
label_42b24c:
    // 0x42b24c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x42b24cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x42b250: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x42b250u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x42b254: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x42b254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b258: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x42b258u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x42b25c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x42b25cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x42b260: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x42b260u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x42b264: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x42B264u;
    SET_GPR_U32(ctx, 31, 0x42B26Cu);
    ctx->pc = 0x42B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B264u;
    // 0x42b268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x42B264u, 0x42B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B26Cu;
label_42b26c:
    // 0x42b26c: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42B26Cu;
    {
        const bool branch_taken_0x42b26c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x42b26c) {
            ctx->pc = 0x42B270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B26Cu;
            // 0x42b270: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B288u;
            goto label_42b288;
        }
    }
    ctx->pc = 0x42B274u;
    // 0x42b274: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x42b274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x42b278: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x42b278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x42b27c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x42B27Cu;
    SET_GPR_U32(ctx, 31, 0x42B284u);
    ctx->pc = 0x42B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B27Cu;
    // 0x42b280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x42B27Cu, 0x42B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B284u;
label_42b284:
    // 0x42b284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42b284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42b288:
    // 0x42b288: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x42B288u;
    SET_GPR_U32(ctx, 31, 0x42B290u);
    ctx->pc = 0x42B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B288u;
    // 0x42b28c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x42B288u, 0x42B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B290u;
label_42b290:
    // 0x42b290: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x42B290u;
    SET_GPR_U32(ctx, 31, 0x42B298u);
    ctx->pc = 0x42B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B290u;
    // 0x42b294: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x42B290u, 0x42B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B298u;
label_42b298:
    // 0x42b298: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42b298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42b29c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x42b29cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42b2a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42b2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42b2a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42b2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42b2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x42B2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B2A8u;
        // 0x42b2ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42B2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42B2B0u;
}
