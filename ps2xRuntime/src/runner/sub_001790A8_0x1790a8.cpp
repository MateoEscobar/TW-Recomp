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

// Function: sub_001790A8
// Address: 0x1790a8 - 0x179138
void sub_001790A8_0x1790a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001790A8_0x1790a8");
#endif

    switch (ctx->pc) {
        case 0x1790a8u: goto label_1790a8;
        case 0x1790acu: goto label_1790ac;
        case 0x1790b0u: goto label_1790b0;
        case 0x1790b4u: goto label_1790b4;
        case 0x1790b8u: goto label_1790b8;
        case 0x1790bcu: goto label_1790bc;
        case 0x1790c0u: goto label_1790c0;
        case 0x1790c4u: goto label_1790c4;
        case 0x1790c8u: goto label_1790c8;
        case 0x1790ccu: goto label_1790cc;
        case 0x1790d0u: goto label_1790d0;
        case 0x1790d4u: goto label_1790d4;
        case 0x1790d8u: goto label_1790d8;
        case 0x1790dcu: goto label_1790dc;
        case 0x1790e0u: goto label_1790e0;
        case 0x1790e4u: goto label_1790e4;
        case 0x1790e8u: goto label_1790e8;
        case 0x1790ecu: goto label_1790ec;
        case 0x1790f0u: goto label_1790f0;
        case 0x1790f4u: goto label_1790f4;
        case 0x1790f8u: goto label_1790f8;
        case 0x1790fcu: goto label_1790fc;
        case 0x179100u: goto label_179100;
        case 0x179104u: goto label_179104;
        case 0x179108u: goto label_179108;
        case 0x17910cu: goto label_17910c;
        case 0x179110u: goto label_179110;
        case 0x179114u: goto label_179114;
        case 0x179118u: goto label_179118;
        case 0x17911cu: goto label_17911c;
        case 0x179120u: goto label_179120;
        case 0x179124u: goto label_179124;
        case 0x179128u: goto label_179128;
        case 0x17912cu: goto label_17912c;
        case 0x179130u: goto label_179130;
        case 0x179134u: goto label_179134;
        default: break;
    }

    ctx->pc = 0x1790a8u;

label_1790a8:
    // 0x1790a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1790a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1790ac:
    // 0x1790ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1790acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1790b0:
    // 0x1790b0: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x1790b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
label_1790b4:
    // 0x1790b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1790b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1790b8:
    // 0x1790b8: 0x8e4271ac  lw          $v0, 0x71AC($s2)
    ctx->pc = 0x1790b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29100)));
label_1790bc:
    // 0x1790bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1790bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1790c0:
    // 0x1790c0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1790c4:
    if (ctx->pc == 0x1790C4u) {
        ctx->pc = 0x1790C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790C0u;
        // 0x1790c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1790C8u;
        goto label_1790c8;
    }
    ctx->pc = 0x1790C0u;
    {
        const bool branch_taken_0x1790c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1790C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790C0u;
        // 0x1790c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790c0) {
            ctx->pc = 0x179120u;
            goto label_179120;
        }
    }
    ctx->pc = 0x1790C8u;
label_1790c8:
    // 0x1790c8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1790c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1790cc:
    // 0x1790cc: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x1790ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_1790d0:
    // 0x1790d0: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x1790d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1790d4:
    // 0x1790d4: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x1790d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_1790d8:
    // 0x1790d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1790d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1790dc:
    // 0x1790dc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1790dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1790e0:
    // 0x1790e0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1790e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1790e4:
    // 0x1790e4: 0x60f809  jalr        $v1
label_1790e8:
    if (ctx->pc == 0x1790E8u) {
        ctx->pc = 0x1790E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790E4u;
        // 0x1790e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1790ECu;
        goto label_1790ec;
    }
    ctx->pc = 0x1790E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1790ECu);
        ctx->pc = 0x1790E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790E4u;
        // 0x1790e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1790E4u, 0x1790ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1790ECu;
label_1790ec:
    // 0x1790ec: 0x8e4471ac  lw          $a0, 0x71AC($s2)
    ctx->pc = 0x1790ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29100)));
label_1790f0:
    // 0x1790f0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1790f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1790f4:
    // 0x1790f4: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x1790f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1790f8:
    // 0x1790f8: 0xc137b76  jal         func_4DEDD8
label_1790fc:
    if (ctx->pc == 0x1790FCu) {
        ctx->pc = 0x1790FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790F8u;
        // 0x1790fc: 0x24a52030  addiu       $a1, $a1, 0x2030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179100u;
        goto label_179100;
    }
    ctx->pc = 0x1790F8u;
    SET_GPR_U32(ctx, 31, 0x179100u);
    ctx->pc = 0x1790FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790F8u;
    // 0x1790fc: 0x24a52030  addiu       $a1, $a1, 0x2030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DEDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEDD8u, 0x1790F8u, 0x179100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179100u;
label_179100:
    // 0x179100: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x179100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_179104:
    // 0x179104: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x179104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_179108:
    // 0x179108: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x179108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17910c:
    // 0x17910c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x17910cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_179110:
    // 0x179110: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x179110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_179114:
    // 0x179114: 0x60f809  jalr        $v1
label_179118:
    if (ctx->pc == 0x179118u) {
        ctx->pc = 0x179118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179114u;
        // 0x179118: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17911Cu;
        goto label_17911c;
    }
    ctx->pc = 0x179114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17911Cu);
        ctx->pc = 0x179118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179114u;
        // 0x179118: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179114u, 0x17911Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17911Cu;
label_17911c:
    // 0x17911c: 0xae4071ac  sw          $zero, 0x71AC($s2)
    ctx->pc = 0x17911cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29100), GPR_U32(ctx, 0));
label_179120:
    // 0x179120: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x179120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_179124:
    // 0x179124: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x179124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179128:
    // 0x179128: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x179128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17912c:
    // 0x17912c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17912cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179130:
    // 0x179130: 0x3e00008  jr          $ra
label_179134:
    if (ctx->pc == 0x179134u) {
        ctx->pc = 0x179134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179130u;
        // 0x179134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179138u;
        goto label_fallthrough_0x179130;
    }
    ctx->pc = 0x179130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179130u;
        // 0x179134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x179130:
    ctx->pc = 0x179138u;
}
