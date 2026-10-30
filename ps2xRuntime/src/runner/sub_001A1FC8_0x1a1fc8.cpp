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

// Function: sub_001A1FC8
// Address: 0x1a1fc8 - 0x1a2060
void sub_001A1FC8_0x1a1fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1FC8_0x1a1fc8");
#endif

    switch (ctx->pc) {
        case 0x1a1fc8u: goto label_1a1fc8;
        case 0x1a1fccu: goto label_1a1fcc;
        case 0x1a1fd0u: goto label_1a1fd0;
        case 0x1a1fd4u: goto label_1a1fd4;
        case 0x1a1fd8u: goto label_1a1fd8;
        case 0x1a1fdcu: goto label_1a1fdc;
        case 0x1a1fe0u: goto label_1a1fe0;
        case 0x1a1fe4u: goto label_1a1fe4;
        case 0x1a1fe8u: goto label_1a1fe8;
        case 0x1a1fecu: goto label_1a1fec;
        case 0x1a1ff0u: goto label_1a1ff0;
        case 0x1a1ff4u: goto label_1a1ff4;
        case 0x1a1ff8u: goto label_1a1ff8;
        case 0x1a1ffcu: goto label_1a1ffc;
        case 0x1a2000u: goto label_1a2000;
        case 0x1a2004u: goto label_1a2004;
        case 0x1a2008u: goto label_1a2008;
        case 0x1a200cu: goto label_1a200c;
        case 0x1a2010u: goto label_1a2010;
        case 0x1a2014u: goto label_1a2014;
        case 0x1a2018u: goto label_1a2018;
        case 0x1a201cu: goto label_1a201c;
        case 0x1a2020u: goto label_1a2020;
        case 0x1a2024u: goto label_1a2024;
        case 0x1a2028u: goto label_1a2028;
        case 0x1a202cu: goto label_1a202c;
        case 0x1a2030u: goto label_1a2030;
        case 0x1a2034u: goto label_1a2034;
        case 0x1a2038u: goto label_1a2038;
        case 0x1a203cu: goto label_1a203c;
        case 0x1a2040u: goto label_1a2040;
        case 0x1a2044u: goto label_1a2044;
        case 0x1a2048u: goto label_1a2048;
        case 0x1a204cu: goto label_1a204c;
        case 0x1a2050u: goto label_1a2050;
        case 0x1a2054u: goto label_1a2054;
        case 0x1a2058u: goto label_1a2058;
        case 0x1a205cu: goto label_1a205c;
        default: break;
    }

    ctx->pc = 0x1a1fc8u;

label_1a1fc8:
    // 0x1a1fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a1fcc:
    // 0x1a1fcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a1fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a1fd0:
    // 0x1a1fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a1fd4:
    // 0x1a1fd4: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_1a1fd8:
    if (ctx->pc == 0x1A1FD8u) {
        ctx->pc = 0x1A1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FD4u;
        // 0x1a1fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1FDCu;
        goto label_1a1fdc;
    }
    ctx->pc = 0x1A1FD4u;
    {
        const bool branch_taken_0x1a1fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FD4u;
        // 0x1a1fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fd4) {
            ctx->pc = 0x1A2030u;
            goto label_1a2030;
        }
    }
    ctx->pc = 0x1A1FDCu;
label_1a1fdc:
    // 0x1a1fdc: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x1a1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1a1fe0:
    // 0x1a1fe0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_1a1fe4:
    if (ctx->pc == 0x1A1FE4u) {
        ctx->pc = 0x1A1FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FE0u;
        // 0x1a1fe4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1FE8u;
        goto label_1a1fe8;
    }
    ctx->pc = 0x1A1FE0u;
    {
        const bool branch_taken_0x1a1fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1fe0) {
            ctx->pc = 0x1A1FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1FE0u;
            // 0x1a1fe4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2050u;
            goto label_1a2050;
        }
    }
    ctx->pc = 0x1A1FE8u;
label_1a1fe8:
    // 0x1a1fe8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a1fec:
    // 0x1a1fec: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a1fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1a1ff0:
    // 0x1a1ff0: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1a1ff0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1a1ff4:
    // 0x1a1ff4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1a1ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1a1ff8:
    // 0x1a1ff8: 0x24a53dd0  addiu       $a1, $a1, 0x3DD0
    ctx->pc = 0x1a1ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15824));
label_1a1ffc:
    // 0x1a1ffc: 0x25083da8  addiu       $t0, $t0, 0x3DA8
    ctx->pc = 0x1a1ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15784));
label_1a2000:
    // 0x1a2000: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1a2000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1a2004:
    // 0x1a2004: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1a2004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1a2008:
    // 0x1a2008: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a2008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a200c:
    // 0x1a200c: 0x24090074  addiu       $t1, $zero, 0x74
    ctx->pc = 0x1a200cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_1a2010:
    // 0x1a2010: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a2010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a2014:
    // 0x1a2014: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a2014u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2018:
    // 0x1a2018: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a2018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a201c:
    // 0x1a201c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a201cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2020:
    // 0x1a2020: 0x40f809  jalr        $v0
label_1a2024:
    if (ctx->pc == 0x1A2024u) {
        ctx->pc = 0x1A2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2020u;
        // 0x1a2024: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2028u;
        goto label_1a2028;
    }
    ctx->pc = 0x1A2020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2028u);
        ctx->pc = 0x1A2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2020u;
        // 0x1a2024: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2020u, 0x1A2028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2028u;
label_1a2028:
    // 0x1a2028: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a202c:
    if (ctx->pc == 0x1A202Cu) {
        ctx->pc = 0x1A202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2028u;
        // 0x1a202c: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2030u;
        goto label_1a2030;
    }
    ctx->pc = 0x1A2028u;
    {
        const bool branch_taken_0x1a2028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2028u;
        // 0x1a202c: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2028) {
            ctx->pc = 0x1A204Cu;
            goto label_1a204c;
        }
    }
    ctx->pc = 0x1A2030u;
label_1a2030:
    // 0x1a2030: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x1a2030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1a2034:
    // 0x1a2034: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a2038:
    if (ctx->pc == 0x1A2038u) {
        ctx->pc = 0x1A2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2034u;
        // 0x1a2038: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A203Cu;
        goto label_1a203c;
    }
    ctx->pc = 0x1A2034u;
    {
        const bool branch_taken_0x1a2034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2034u;
        // 0x1a2038: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2034) {
            ctx->pc = 0x1A204Cu;
            goto label_1a204c;
        }
    }
    ctx->pc = 0x1A203Cu;
label_1a203c:
    // 0x1a203c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a203cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1a2040:
    // 0x1a2040: 0xc138fce  jal         func_4E3F38
label_1a2044:
    if (ctx->pc == 0x1A2044u) {
        ctx->pc = 0x1A2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2040u;
        // 0x1a2044: 0x24a53da8  addiu       $a1, $a1, 0x3DA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2048u;
        goto label_1a2048;
    }
    ctx->pc = 0x1A2040u;
    SET_GPR_U32(ctx, 31, 0x1A2048u);
    ctx->pc = 0x1A2044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2040u;
    // 0x1a2044: 0x24a53da8  addiu       $a1, $a1, 0x3DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3F38u, 0x1A2040u, 0x1A2048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2048u;
label_1a2048:
    // 0x1a2048: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x1a2048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_1a204c:
    // 0x1a204c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a204cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2050:
    // 0x1a2050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2054:
    // 0x1a2054: 0x3e00008  jr          $ra
label_1a2058:
    if (ctx->pc == 0x1A2058u) {
        ctx->pc = 0x1A2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2054u;
        // 0x1a2058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A205Cu;
        goto label_1a205c;
    }
    ctx->pc = 0x1A2054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2054u;
        // 0x1a2058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A205Cu;
label_1a205c:
    // 0x1a205c: 0x0  nop
    ctx->pc = 0x1a205cu;
    // NOP
    ctx->pc = 0x1a2060u;
}
