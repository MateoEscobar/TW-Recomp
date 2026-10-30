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

// Function: sub_004D7CE8
// Address: 0x4d7ce8 - 0x4d7db8
void sub_004D7CE8_0x4d7ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7CE8_0x4d7ce8");
#endif

    switch (ctx->pc) {
        case 0x4d7d28u: goto label_4d7d28;
        case 0x4d7d3cu: goto label_4d7d3c;
        case 0x4d7d48u: goto label_4d7d48;
        case 0x4d7d54u: goto label_4d7d54;
        case 0x4d7d74u: goto label_4d7d74;
        case 0x4d7d80u: goto label_4d7d80;
        case 0x4d7d8cu: goto label_4d7d8c;
        case 0x4d7d98u: goto label_4d7d98;
        default: break;
    }

    ctx->pc = 0x4d7ce8u;

    // 0x4d7ce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d7ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d7cec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x4d7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4d7cf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d7cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d7cf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d7cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d7cf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4d7cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d7cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d7d00: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4d7d00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d7d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d7d08: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4D7D08u;
    {
        const bool branch_taken_0x4d7d08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4D7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7D08u;
        // 0x4d7d0c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7d08) {
            ctx->pc = 0x4D7D5Cu;
            goto label_4d7d5c;
        }
    }
    ctx->pc = 0x4D7D10u;
    // 0x4d7d10: 0x68080  sll         $s0, $a2, 2
    ctx->pc = 0x4d7d10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d7d14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d7d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7d18: 0x2611ffe0  addiu       $s1, $s0, -0x20
    ctx->pc = 0x4d7d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x4d7d1c: 0x2718821  addu        $s1, $s3, $s1
    ctx->pc = 0x4d7d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x4d7d20: 0xc135804  jal         func_4D6010
    ctx->pc = 0x4D7D20u;
    SET_GPR_U32(ctx, 31, 0x4D7D28u);
    ctx->pc = 0x4D7D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7D20u;
    // 0x4d7d24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6010u, 0x4D7D20u, 0x4D7D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7D28u;
label_4d7d28:
    // 0x4d7d28: 0x2610ff80  addiu       $s0, $s0, -0x80
    ctx->pc = 0x4d7d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x4d7d2c: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x4d7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x4d7d30: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x4d7d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x4d7d34: 0xc13593c  jal         func_4D64F0
    ctx->pc = 0x4D7D34u;
    SET_GPR_U32(ctx, 31, 0x4D7D3Cu);
    ctx->pc = 0x4D7D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7D34u;
    // 0x4d7d38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D64F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D64F0u, 0x4D7D34u, 0x4D7D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7D3Cu;
label_4d7d3c:
    // 0x4d7d3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d7d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7d40: 0xc135804  jal         func_4D6010
    ctx->pc = 0x4D7D40u;
    SET_GPR_U32(ctx, 31, 0x4D7D48u);
    ctx->pc = 0x4D7D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7D40u;
    // 0x4d7d44: 0x26440100  addiu       $a0, $s2, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6010u, 0x4D7D40u, 0x4D7D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7D48u;
label_4d7d48:
    // 0x4d7d48: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x4d7d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x4d7d4c: 0xc13593c  jal         func_4D64F0
    ctx->pc = 0x4D7D4Cu;
    SET_GPR_U32(ctx, 31, 0x4D7D54u);
    ctx->pc = 0x4D7D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7D4Cu;
    // 0x4d7d50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D64F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D64F0u, 0x4D7D4Cu, 0x4D7D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7D54u;
label_4d7d54:
    // 0x4d7d54: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4D7D54u;
    {
        const bool branch_taken_0x4d7d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7D54u;
        // 0x4d7d58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7d54) {
            ctx->pc = 0x4D7D9Cu;
            goto label_4d7d9c;
        }
    }
    ctx->pc = 0x4D7D5Cu;
label_4d7d5c:
    // 0x4d7d5c: 0x68080  sll         $s0, $a2, 2
    ctx->pc = 0x4d7d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d7d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d7d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7d64: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x4d7d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x4d7d68: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x4d7d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x4d7d6c: 0xc135ae4  jal         func_4D6B90
    ctx->pc = 0x4D7D6Cu;
    SET_GPR_U32(ctx, 31, 0x4D7D74u);
    ctx->pc = 0x4D7D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7D6Cu;
    // 0x4d7d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6B90u, 0x4D7D6Cu, 0x4D7D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7D74u;
label_4d7d74:
    // 0x4d7d74: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x4d7d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x4d7d78: 0xc135b52  jal         func_4D6D48
    ctx->pc = 0x4D7D78u;
    SET_GPR_U32(ctx, 31, 0x4D7D80u);
    ctx->pc = 0x4D7D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7D78u;
    // 0x4d7d7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6D48u, 0x4D7D78u, 0x4D7D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7D80u;
label_4d7d80:
    // 0x4d7d80: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x4d7d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x4d7d84: 0xc135ae4  jal         func_4D6B90
    ctx->pc = 0x4D7D84u;
    SET_GPR_U32(ctx, 31, 0x4D7D8Cu);
    ctx->pc = 0x4D7D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7D84u;
    // 0x4d7d88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6B90u, 0x4D7D84u, 0x4D7D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7D8Cu;
label_4d7d8c:
    // 0x4d7d8c: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x4d7d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x4d7d90: 0xc135b52  jal         func_4D6D48
    ctx->pc = 0x4D7D90u;
    SET_GPR_U32(ctx, 31, 0x4D7D98u);
    ctx->pc = 0x4D7D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7D90u;
    // 0x4d7d94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6D48u, 0x4D7D90u, 0x4D7D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7D98u;
label_4d7d98:
    // 0x4d7d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d7d9c:
    // 0x4d7d9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d7d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d7da0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d7da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7da4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d7da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d7da8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d7da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d7dac: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7DACu;
        // 0x4d7db0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D7DB4u;
    // 0x4d7db4: 0x0  nop
    ctx->pc = 0x4d7db4u;
    // NOP
    ctx->pc = 0x4d7db8u;
}
