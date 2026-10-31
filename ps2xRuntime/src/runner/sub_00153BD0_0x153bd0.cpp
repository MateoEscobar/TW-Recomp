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

// Function: sub_00153BD0
// Address: 0x153bd0 - 0x153de0
void sub_00153BD0_0x153bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153BD0_0x153bd0");
#endif

    switch (ctx->pc) {
        case 0x153dacu: goto label_153dac;
        default: break;
    }

    ctx->pc = 0x153bd0u;

    // 0x153bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x153BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BD0u;
        // 0x153bd4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153BD8u;
    // 0x153bd8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x153bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x153bdc: 0x0  nop
    ctx->pc = 0x153bdcu;
    // NOP
    // 0x153be0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x153be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x153be4: 0x0  nop
    ctx->pc = 0x153be4u;
    // NOP
    // 0x153be8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x153be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x153bec: 0x0  nop
    ctx->pc = 0x153becu;
    // NOP
    // 0x153bf0: 0x0  nop
    ctx->pc = 0x153bf0u;
    // NOP
    // 0x153bf4: 0x0  nop
    ctx->pc = 0x153bf4u;
    // NOP
    // 0x153bf8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x153bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x153bfc: 0x0  nop
    ctx->pc = 0x153bfcu;
    // NOP
    // 0x153c00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x153c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x153c04: 0x0  nop
    ctx->pc = 0x153c04u;
    // NOP
    // 0x153c08: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x153c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x153c0c: 0x0  nop
    ctx->pc = 0x153c0cu;
    // NOP
    // 0x153c10: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x153c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x153c14: 0x0  nop
    ctx->pc = 0x153c14u;
    // NOP
    // 0x153c18: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x153c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x153c1c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x153c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x153c20: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x153c20u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c24: 0x8c475200  lw          $a3, 0x5200($v0)
    ctx->pc = 0x153c24u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5E5200u));
    // 0x153c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153c2c: 0xac605310  sw          $zero, 0x5310($v1)
    ctx->pc = 0x153c2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5E5310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5310u, _value); } while (0);
    // 0x153c30: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x153c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x153c34: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x153c34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153c3c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x153c3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c40: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x153c40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c44: 0xac405300  sw          $zero, 0x5300($v0)
    ctx->pc = 0x153c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5E5300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5300u, _value); } while (0);
    // 0x153c48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x153c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153c4c: 0x10e5000e  beq         $a3, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x153C4Cu;
    {
        const bool branch_taken_0x153c4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x153C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C4Cu;
        // 0x153c50: 0x28e20003  slti        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c4c) {
            ctx->pc = 0x153C88u;
            goto label_153c88;
        }
    }
    ctx->pc = 0x153C54u;
    // 0x153c54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153C54u;
    {
        const bool branch_taken_0x153c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C54u;
        // 0x153c58: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c54) {
            ctx->pc = 0x153C68u;
            goto label_153c68;
        }
    }
    ctx->pc = 0x153C5Cu;
    // 0x153c5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x153c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153c60: 0x10e2001e  beq         $a3, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x153C60u;
    {
        const bool branch_taken_0x153c60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x153C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C60u;
        // 0x153c64: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c60) {
            ctx->pc = 0x153CDCu;
            goto label_153cdc;
        }
    }
    ctx->pc = 0x153C68u;
label_153c68:
    // 0x153c68: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x153c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x153c6c: 0x84435208  lh          $v1, 0x5208($v0)
    ctx->pc = 0x153c6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 21000)));
    // 0x153c70: 0x93842  srl         $a3, $t1, 1
    ctx->pc = 0x153c70u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x153c74: 0xac805314  sw          $zero, 0x5314($a0)
    ctx->pc = 0x153c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 21268), GPR_U32(ctx, 0));
    // 0x153c78: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x153c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x153c7c: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x153c7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c80: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x153C80u;
    {
        const bool branch_taken_0x153c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C80u;
        // 0x153c84: 0x102500a  movz        $t2, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c80) {
            ctx->pc = 0x153CF0u;
            goto label_153cf0;
        }
    }
    ctx->pc = 0x153C88u;
label_153c88:
    // 0x153c88: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x153c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x153c8c: 0x92842  srl         $a1, $t1, 1
    ctx->pc = 0x153c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x153c90: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x153c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x153c94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x153c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x153c98: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x153C98u;
    {
        const bool branch_taken_0x153c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c98) {
            ctx->pc = 0x153C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153C98u;
            // 0x153c9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x153CA0u;
            goto label_153ca0;
        }
    }
    ctx->pc = 0x153CA0u;
label_153ca0:
    // 0x153ca0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x153ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x153ca4: 0x84865208  lh          $a2, 0x5208($a0)
    ctx->pc = 0x153ca4u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x5E5208u));
    // 0x153ca8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x153ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x153cac: 0xac405318  sw          $zero, 0x5318($v0)
    ctx->pc = 0x153cacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5E5318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5318u, _value); } while (0);
    // 0x153cb0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x153cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x153cb4: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x153cb4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x153cb8: 0xac80531c  sw          $zero, 0x531C($a0)
    ctx->pc = 0x153cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 21276), GPR_U32(ctx, 0));
    // 0x153cbc: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x153cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x153cc0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x153cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x153cc4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x153cc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153cc8: 0xac605320  sw          $zero, 0x5320($v1)
    ctx->pc = 0x153cc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5E5320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5320u, _value); } while (0);
    // 0x153ccc: 0x102500a  movz        $t2, $t0, $v0
    ctx->pc = 0x153cccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 8));
    // 0x153cd0: 0x2812  mflo        $a1
    ctx->pc = 0x153cd0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x153cd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x153CD4u;
    {
        const bool branch_taken_0x153cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CD4u;
        // 0x153cd8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cd4) {
            ctx->pc = 0x153CF0u;
            goto label_153cf0;
        }
    }
    ctx->pc = 0x153CDCu;
label_153cdc:
    // 0x153cdc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x153cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x153ce0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x153ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x153ce4: 0x844a5208  lh          $t2, 0x5208($v0)
    ctx->pc = 0x153ce4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 21000)));
    // 0x153ce8: 0xac655324  sw          $a1, 0x5324($v1)
    ctx->pc = 0x153ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5E5324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5324u, _value); } while (0);
    // 0x153cec: 0x8487520a  lh          $a3, 0x520A($a0)
    ctx->pc = 0x153cecu;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x5E520Au));
label_153cf0:
    // 0x153cf0: 0x2d620005  sltiu       $v0, $t3, 0x5
    ctx->pc = 0x153cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x153cf4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x153CF4u;
    {
        const bool branch_taken_0x153cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CF4u;
        // 0x153cf8: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cf4) {
            ctx->pc = 0x153D70u;
            goto label_153d70;
        }
    }
    ctx->pc = 0x153CFCu;
    // 0x153cfc: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x153cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x153d00: 0x2442db20  addiu       $v0, $v0, -0x24E0
    ctx->pc = 0x153d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957856));
    // 0x153d04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x153d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153d08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x153d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153d0c: 0x800008  jr          $a0
    ctx->pc = 0x153D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153D14u: goto label_153d14;
            case 0x153D34u: goto label_153d34;
            case 0x153D44u: goto label_153d44;
            case 0x153D64u: goto label_153d64;
            case 0x153D70u: goto label_153d70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153D0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x153D14u;
label_153d14:
    // 0x153d14: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x153d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x153d18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x153d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153d1c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x153d1cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x153d20: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x153D20u;
    {
        const bool branch_taken_0x153d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153d20) {
            ctx->pc = 0x153D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153D20u;
            // 0x153d24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x153D28u;
            goto label_153d28;
        }
    }
    ctx->pc = 0x153D28u;
label_153d28:
    // 0x153d28: 0x1012  mflo        $v0
    ctx->pc = 0x153d28u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x153d2c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x153D2Cu;
    {
        const bool branch_taken_0x153d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D2Cu;
        // 0x153d30: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d2c) {
            ctx->pc = 0x153D70u;
            goto label_153d70;
        }
    }
    ctx->pc = 0x153D34u;
label_153d34:
    // 0x153d34: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x153d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x153d38: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x153d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x153d3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x153D3Cu;
    {
        const bool branch_taken_0x153d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D3Cu;
        // 0x153d40: 0x25082  srl         $t2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d3c) {
            ctx->pc = 0x153D70u;
            goto label_153d70;
        }
    }
    ctx->pc = 0x153D44u;
label_153d44:
    // 0x153d44: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x153d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x153d48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x153d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153d4c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x153d4cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x153d50: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x153D50u;
    {
        const bool branch_taken_0x153d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153d50) {
            ctx->pc = 0x153D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153D50u;
            // 0x153d54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x153D58u;
            goto label_153d58;
        }
    }
    ctx->pc = 0x153D58u;
label_153d58:
    // 0x153d58: 0x1012  mflo        $v0
    ctx->pc = 0x153d58u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x153d5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x153D5Cu;
    {
        const bool branch_taken_0x153d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D5Cu;
        // 0x153d60: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d5c) {
            ctx->pc = 0x153D70u;
            goto label_153d70;
        }
    }
    ctx->pc = 0x153D64u;
label_153d64:
    // 0x153d64: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x153d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x153d68: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x153d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x153d6c: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x153d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_153d70:
    // 0x153d70: 0x72842  srl         $a1, $a3, 1
    ctx->pc = 0x153d70u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x153d74: 0xa2042  srl         $a0, $t2, 1
    ctx->pc = 0x153d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x153d78: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x153d78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x153d7c: 0x8d835200  lw          $v1, 0x5200($t4)
    ctx->pc = 0x153d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20992)));
    // 0x153d80: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x153d80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x153d84: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x153d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153d88: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x153d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x153d8c: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x153d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x153d90: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x153d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x153d94: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x153d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x153d98: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x153d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d9c: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x153d9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x153da0: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x153da0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x153da4: 0xc054f78  jal         func_153DE0
    ctx->pc = 0x153DA4u;
    SET_GPR_U32(ctx, 31, 0x153DACu);
    ctx->pc = 0x153DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153DA4u;
    // 0x153da8: 0x240b1b00  addiu       $t3, $zero, 0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153DE0u, 0x153DA4u, 0x153DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DACu;
label_153dac:
    // 0x153dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153db0: 0x3e00008  jr          $ra
    ctx->pc = 0x153DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DB0u;
        // 0x153db4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153DB8u;
    // 0x153db8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x153db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x153dbc: 0x0  nop
    ctx->pc = 0x153dbcu;
    // NOP
    // 0x153dc0: 0x0  nop
    ctx->pc = 0x153dc0u;
    // NOP
    // 0x153dc4: 0x0  nop
    ctx->pc = 0x153dc4u;
    // NOP
    // 0x153dc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x153dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x153dcc: 0x0  nop
    ctx->pc = 0x153dccu;
    // NOP
    // 0x153dd0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x153dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x153dd4: 0x0  nop
    ctx->pc = 0x153dd4u;
    // NOP
    // 0x153dd8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x153dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x153ddc: 0x0  nop
    ctx->pc = 0x153ddcu;
    // NOP
    ctx->pc = 0x153de0u;
}
