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

// Function: sub_002C70A0
// Address: 0x2c70a0 - 0x2c7158
void sub_002C70A0_0x2c70a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C70A0_0x2c70a0");
#endif

    switch (ctx->pc) {
        case 0x2c70a0u: goto label_2c70a0;
        case 0x2c70a4u: goto label_2c70a4;
        case 0x2c70a8u: goto label_2c70a8;
        case 0x2c70acu: goto label_2c70ac;
        case 0x2c70b0u: goto label_2c70b0;
        case 0x2c70b4u: goto label_2c70b4;
        case 0x2c70b8u: goto label_2c70b8;
        case 0x2c70bcu: goto label_2c70bc;
        case 0x2c70c0u: goto label_2c70c0;
        case 0x2c70c4u: goto label_2c70c4;
        case 0x2c70c8u: goto label_2c70c8;
        case 0x2c70ccu: goto label_2c70cc;
        case 0x2c70d0u: goto label_2c70d0;
        case 0x2c70d4u: goto label_2c70d4;
        case 0x2c70d8u: goto label_2c70d8;
        case 0x2c70dcu: goto label_2c70dc;
        case 0x2c70e0u: goto label_2c70e0;
        case 0x2c70e4u: goto label_2c70e4;
        case 0x2c70e8u: goto label_2c70e8;
        case 0x2c70ecu: goto label_2c70ec;
        case 0x2c70f0u: goto label_2c70f0;
        case 0x2c70f4u: goto label_2c70f4;
        case 0x2c70f8u: goto label_2c70f8;
        case 0x2c70fcu: goto label_2c70fc;
        case 0x2c7100u: goto label_2c7100;
        case 0x2c7104u: goto label_2c7104;
        case 0x2c7108u: goto label_2c7108;
        case 0x2c710cu: goto label_2c710c;
        case 0x2c7110u: goto label_2c7110;
        case 0x2c7114u: goto label_2c7114;
        case 0x2c7118u: goto label_2c7118;
        case 0x2c711cu: goto label_2c711c;
        case 0x2c7120u: goto label_2c7120;
        case 0x2c7124u: goto label_2c7124;
        case 0x2c7128u: goto label_2c7128;
        case 0x2c712cu: goto label_2c712c;
        case 0x2c7130u: goto label_2c7130;
        case 0x2c7134u: goto label_2c7134;
        case 0x2c7138u: goto label_2c7138;
        case 0x2c713cu: goto label_2c713c;
        case 0x2c7140u: goto label_2c7140;
        case 0x2c7144u: goto label_2c7144;
        case 0x2c7148u: goto label_2c7148;
        case 0x2c714cu: goto label_2c714c;
        case 0x2c7150u: goto label_2c7150;
        case 0x2c7154u: goto label_2c7154;
        default: break;
    }

    ctx->pc = 0x2c70a0u;

label_2c70a0:
    // 0x2c70a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c70a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2c70a4:
    // 0x2c70a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c70a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2c70a8:
    // 0x2c70a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c70a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2c70ac:
    // 0x2c70ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c70acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c70b0:
    // 0x2c70b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c70b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2c70b4:
    // 0x2c70b4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2c70b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_2c70b8:
    // 0x2c70b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c70b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c70bc:
    // 0x2c70bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c70c0:
    // 0x2c70c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c70c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c70c4:
    // 0x2c70c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c70c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c70c8:
    // 0x2c70c8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c70c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c70cc:
    // 0x2c70cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c70d0:
    // 0x2c70d0: 0x40f809  jalr        $v0
label_2c70d4:
    if (ctx->pc == 0x2C70D4u) {
        ctx->pc = 0x2C70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70D0u;
        // 0x2c70d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C70D8u;
        goto label_2c70d8;
    }
    ctx->pc = 0x2C70D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C70D8u);
        ctx->pc = 0x2C70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70D0u;
        // 0x2c70d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C70D0u, 0x2C70D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C70D8u;
label_2c70d8:
    // 0x2c70d8: 0xc08e2b8  jal         func_238AE0
label_2c70dc:
    if (ctx->pc == 0x2C70DCu) {
        ctx->pc = 0x2C70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70D8u;
        // 0x2c70dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C70E0u;
        goto label_2c70e0;
    }
    ctx->pc = 0x2C70D8u;
    SET_GPR_U32(ctx, 31, 0x2C70E0u);
    ctx->pc = 0x2C70DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C70D8u;
    // 0x2c70dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AE0u, 0x2C70D8u, 0x2C70E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C70E0u;
label_2c70e0:
    // 0x2c70e0: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2c70e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_2c70e4:
    // 0x2c70e4: 0xc0e409a  jal         func_390268
label_2c70e8:
    if (ctx->pc == 0x2C70E8u) {
        ctx->pc = 0x2C70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70E4u;
        // 0x2c70e8: 0x24840284  addiu       $a0, $a0, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C70ECu;
        goto label_2c70ec;
    }
    ctx->pc = 0x2C70E4u;
    SET_GPR_U32(ctx, 31, 0x2C70ECu);
    ctx->pc = 0x2C70E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C70E4u;
    // 0x2c70e8: 0x24840284  addiu       $a0, $a0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C70E4u, 0x2C70ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C70ECu;
label_2c70ec:
    // 0x2c70ec: 0x54500006  bnel        $v0, $s0, . + 4 + (0x6 << 2)
label_2c70f0:
    if (ctx->pc == 0x2C70F0u) {
        ctx->pc = 0x2C70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70ECu;
        // 0x2c70f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C70F4u;
        goto label_2c70f4;
    }
    ctx->pc = 0x2C70ECu;
    {
        const bool branch_taken_0x2c70ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c70ec) {
            ctx->pc = 0x2C70F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C70ECu;
            // 0x2c70f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7108u;
            goto label_2c7108;
        }
    }
    ctx->pc = 0x2C70F4u;
label_2c70f4:
    // 0x2c70f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2c70f8:
    // 0x2c70f8: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2c70f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_2c70fc:
    // 0x2c70fc: 0xc107420  jal         func_41D080
label_2c7100:
    if (ctx->pc == 0x2C7100u) {
        ctx->pc = 0x2C7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70FCu;
        // 0x2c7100: 0x8c45bd30  lw          $a1, -0x42D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7104u;
        goto label_2c7104;
    }
    ctx->pc = 0x2C70FCu;
    SET_GPR_U32(ctx, 31, 0x2C7104u);
    ctx->pc = 0x2C7100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C70FCu;
    // 0x2c7100: 0x8c45bd30  lw          $a1, -0x42D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D080u, 0x2C70FCu, 0x2C7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7104u;
label_2c7104:
    // 0x2c7104: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c7104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c7108:
    // 0x2c7108: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c710c:
    // 0x2c710c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x2c710cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2c7110:
    // 0x2c7110: 0xac82021c  sw          $v0, 0x21C($a0)
    ctx->pc = 0x2c7110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 2));
label_2c7114:
    // 0x2c7114: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c7114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c7118:
    // 0x2c7118: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2c7118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_2c711c:
    // 0x2c711c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c7120:
    // 0x2c7120: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2c7120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2c7124:
    // 0x2c7124: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2c7124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_2c7128:
    // 0x2c7128: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2c7128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c712c:
    // 0x2c712c: 0x84a40038  lh          $a0, 0x38($a1)
    ctx->pc = 0x2c712cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
label_2c7130:
    // 0x2c7130: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2c7130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2c7134:
    // 0x2c7134: 0x40f809  jalr        $v0
label_2c7138:
    if (ctx->pc == 0x2C7138u) {
        ctx->pc = 0x2C7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7134u;
        // 0x2c7138: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C713Cu;
        goto label_2c713c;
    }
    ctx->pc = 0x2C7134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C713Cu);
        ctx->pc = 0x2C7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7134u;
        // 0x2c7138: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7134u, 0x2C713Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C713Cu;
label_2c713c:
    // 0x2c713c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c713cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c7140:
    // 0x2c7140: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c7140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7144:
    // 0x2c7144: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c7144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7148:
    // 0x2c7148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c7148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c714c:
    // 0x2c714c: 0x3e00008  jr          $ra
label_2c7150:
    if (ctx->pc == 0x2C7150u) {
        ctx->pc = 0x2C7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C714Cu;
        // 0x2c7150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7154u;
        goto label_2c7154;
    }
    ctx->pc = 0x2C714Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C714Cu;
        // 0x2c7150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C714Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7154u;
label_2c7154:
    // 0x2c7154: 0x0  nop
    ctx->pc = 0x2c7154u;
    // NOP
    ctx->pc = 0x2c7158u;
}
