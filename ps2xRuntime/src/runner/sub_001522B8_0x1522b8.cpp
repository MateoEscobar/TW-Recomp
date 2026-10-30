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

// Function: sub_001522B8
// Address: 0x1522b8 - 0x1523d8
void sub_001522B8_0x1522b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001522B8_0x1522b8");
#endif

    switch (ctx->pc) {
        case 0x152324u: goto label_152324;
        case 0x152344u: goto label_152344;
        case 0x152380u: goto label_152380;
        case 0x1523b8u: goto label_1523b8;
        default: break;
    }

    ctx->pc = 0x1522b8u;

    // 0x1522b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1522b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1522bc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1522bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522c0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1522c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1522c4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1522c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1522c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1522c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1522cc: 0x8e43c5d8  lw          $v1, -0x3A28($s2)
    ctx->pc = 0x1522ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5D8u));
    // 0x1522d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1522d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1522d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1522D4u;
    {
        const bool branch_taken_0x1522d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1522D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522D4u;
        // 0x1522d8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522d4) {
            ctx->pc = 0x1522F0u;
            goto label_1522f0;
        }
    }
    ctx->pc = 0x1522DCu;
    // 0x1522dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1522dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1522e0: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1522E0u;
    {
        const bool branch_taken_0x1522e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1522E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522E0u;
        // 0x1522e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522e0) {
            ctx->pc = 0x15235Cu;
            goto label_15235c;
        }
    }
    ctx->pc = 0x1522E8u;
    // 0x1522e8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1522E8u;
    {
        const bool branch_taken_0x1522e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1522ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522E8u;
        // 0x1522ec: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522e8) {
            ctx->pc = 0x1523C4u;
            goto label_1523c4;
        }
    }
    ctx->pc = 0x1522F0u;
label_1522f0:
    // 0x1522f0: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x1522f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    // 0x1522f4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1522f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1522f8: 0x26304668  addiu       $s0, $s1, 0x4668
    ctx->pc = 0x1522f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18024));
    // 0x1522fc: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x1522fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x152300: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x152300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E4688u));
    // 0x152304: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x152304u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x152308: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15230c: 0x24a5d580  addiu       $a1, $a1, -0x2A80
    ctx->pc = 0x15230cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956416));
    // 0x152310: 0x24c64650  addiu       $a2, $a2, 0x4650
    ctx->pc = 0x152310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    // 0x152314: 0x24e74658  addiu       $a3, $a3, 0x4658
    ctx->pc = 0x152314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    // 0x152318: 0x2608003c  addiu       $t0, $s0, 0x3C
    ctx->pc = 0x152318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x15231c: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x15231Cu;
    SET_GPR_U32(ctx, 31, 0x152324u);
    ctx->pc = 0x152320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15231Cu;
    // 0x152320: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x15231Cu, 0x152324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152324u;
label_152324:
    // 0x152324: 0x8e244668  lw          $a0, 0x4668($s1)
    ctx->pc = 0x152324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18024)));
    // 0x152328: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x152328u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x15232c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x15232cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152330: 0x25294b40  addiu       $t1, $t1, 0x4B40
    ctx->pc = 0x152330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19264));
    // 0x152334: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152338: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15233c: 0xc111638  jal         func_4458E0
    ctx->pc = 0x15233Cu;
    SET_GPR_U32(ctx, 31, 0x152344u);
    ctx->pc = 0x152340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15233Cu;
    // 0x152340: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4458E0u, 0x15233Cu, 0x152344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152344u;
label_152344:
    // 0x152344: 0x8e43c5d8  lw          $v1, -0x3A28($s2)
    ctx->pc = 0x152344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952408)));
    // 0x152348: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x152348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x15234c: 0xac82c5ec  sw          $v0, -0x3A14($a0)
    ctx->pc = 0x15234cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
    // 0x152350: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x152350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x152354: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x152354u;
    {
        const bool branch_taken_0x152354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152354u;
        // 0x152358: 0xae43c5d8  sw          $v1, -0x3A28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294952408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152354) {
            ctx->pc = 0x1523B8u;
            goto label_1523b8;
        }
    }
    ctx->pc = 0x15235Cu;
label_15235c:
    // 0x15235c: 0x14c30017  bne         $a2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x15235Cu;
    {
        const bool branch_taken_0x15235c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x152360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15235Cu;
        // 0x152360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15235c) {
            ctx->pc = 0x1523BCu;
            goto label_1523bc;
        }
    }
    ctx->pc = 0x152364u;
    // 0x152364: 0x4e10008  bgez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x152364u;
    {
        const bool branch_taken_0x152364 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x152368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152364u;
        // 0x152368: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152364) {
            ctx->pc = 0x152388u;
            goto label_152388;
        }
    }
    ctx->pc = 0x15236Cu;
    // 0x15236c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15236cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152370: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x152370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152374: 0xac47c5ec  sw          $a3, -0x3A14($v0)
    ctx->pc = 0x152374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
    // 0x152378: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152378u;
    SET_GPR_U32(ctx, 31, 0x152380u);
    ctx->pc = 0x15237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152378u;
    // 0x15237c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152378u, 0x152380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152380u;
label_152380:
    // 0x152380: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x152380u;
    {
        const bool branch_taken_0x152380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152380u;
        // 0x152384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152380) {
            ctx->pc = 0x1523BCu;
            goto label_1523bc;
        }
    }
    ctx->pc = 0x152388u;
label_152388:
    // 0x152388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x152388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15238c: 0x24634668  addiu       $v1, $v1, 0x4668
    ctx->pc = 0x15238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18024));
    // 0x152390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152394: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x152394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x152398: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x152398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15239c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x15239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1523a0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1523a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1523a4: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x1523a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1523a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1523a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1523ac: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1523acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1523b0: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x1523B0u;
    SET_GPR_U32(ctx, 31, 0x1523B8u);
    ctx->pc = 0x1523B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523B0u;
    // 0x1523b4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x1523B0u, 0x1523B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523B8u;
label_1523b8:
    // 0x1523b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1523b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1523bc:
    // 0x1523bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1523bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1523c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1523c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1523c4:
    // 0x1523c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1523c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1523c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1523c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1523cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1523CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1523D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523CCu;
        // 0x1523d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1523CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1523D4u;
    // 0x1523d4: 0x0  nop
    ctx->pc = 0x1523d4u;
    // NOP
    ctx->pc = 0x1523d8u;
}
