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

// Function: sub_0032DE40
// Address: 0x32de40 - 0x32df80
void sub_0032DE40_0x32de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DE40_0x32de40");
#endif

    switch (ctx->pc) {
        case 0x32de8cu: goto label_32de8c;
        case 0x32de98u: goto label_32de98;
        case 0x32deacu: goto label_32deac;
        case 0x32deccu: goto label_32decc;
        case 0x32def8u: goto label_32def8;
        case 0x32df10u: goto label_32df10;
        case 0x32df4cu: goto label_32df4c;
        default: break;
    }

    ctx->pc = 0x32de40u;

    // 0x32de40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x32de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x32de44: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x32de44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x32de48: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x32de48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x32de4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32de4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32de50: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x32de50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x32de54: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x32de54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x32de58: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x32de58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32de5c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x32de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x32de60: 0x2413003e  addiu       $s3, $zero, 0x3E
    ctx->pc = 0x32de60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x32de64: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x32de64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x32de68: 0x2417007d  addiu       $s7, $zero, 0x7D
    ctx->pc = 0x32de68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x32de6c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x32de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x32de70: 0x241e003b  addiu       $fp, $zero, 0x3B
    ctx->pc = 0x32de70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x32de74: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x32de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x32de78: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x32de78u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
    // 0x32de7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32de7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32de80: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x32de80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x32de84: 0xc0cb8bc  jal         func_32E2F0
    ctx->pc = 0x32DE84u;
    SET_GPR_U32(ctx, 31, 0x32DE8Cu);
    ctx->pc = 0x32DE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE84u;
    // 0x32de88: 0x8e350028  lw          $s5, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E2F0u, 0x32DE84u, 0x32DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE8Cu;
label_32de8c:
    // 0x32de8c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x32DE8Cu;
    {
        const bool branch_taken_0x32de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE8Cu;
        // 0x32de90: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32de8c) {
            ctx->pc = 0x32DEFCu;
            goto label_32defc;
        }
    }
    ctx->pc = 0x32DE94u;
    // 0x32de94: 0x0  nop
    ctx->pc = 0x32de94u;
    // NOP
label_32de98:
    // 0x32de98: 0x293001a  div         $zero, $s4, $s3
    ctx->pc = 0x32de98u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32de9c: 0x9012  mflo        $s2
    ctx->pc = 0x32de9cu;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x32dea0: 0x8010  mfhi        $s0
    ctx->pc = 0x32dea0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x32dea4: 0xc0cb8bc  jal         func_32E2F0
    ctx->pc = 0x32DEA4u;
    SET_GPR_U32(ctx, 31, 0x32DEACu);
    ctx->pc = 0x32DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DEA4u;
    // 0x32dea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E2F0u, 0x32DEA4u, 0x32DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DEACu;
label_32deac:
    // 0x32deac: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x32deacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x32deb0: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32DEB0u;
    {
        const bool branch_taken_0x32deb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x32deb0) {
            ctx->pc = 0x32DEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DEB0u;
            // 0x32deb4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DEB8u;
            goto label_32deb8;
        }
    }
    ctx->pc = 0x32DEB8u;
label_32deb8:
    // 0x32deb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32deb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32debc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x32debcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x32dec0: 0x26c75d50  addiu       $a3, $s6, 0x5D50
    ctx->pc = 0x32dec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 23888));
    // 0x32dec4: 0xc0ca88a  jal         func_32A228
    ctx->pc = 0x32DEC4u;
    SET_GPR_U32(ctx, 31, 0x32DECCu);
    ctx->pc = 0x32DEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DEC4u;
    // 0x32dec8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A228u, 0x32DEC4u, 0x32DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DECCu;
label_32decc:
    // 0x32decc: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32DECCu;
    {
        const bool branch_taken_0x32decc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x32decc) {
            ctx->pc = 0x32DED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DECCu;
            // 0x32ded0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DED4u;
            goto label_32ded4;
        }
    }
    ctx->pc = 0x32DED4u;
label_32ded4:
    // 0x32ded4: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x32DED4u;
    {
        const bool branch_taken_0x32ded4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ded4) {
            ctx->pc = 0x32DED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DED4u;
            // 0x32ded8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DEFCu;
            goto label_32defc;
        }
    }
    ctx->pc = 0x32DEDCu;
    // 0x32dedc: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32DEDCu;
    {
        const bool branch_taken_0x32dedc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dedc) {
            ctx->pc = 0x32DEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DEDCu;
            // 0x32dee0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DEE4u;
            goto label_32dee4;
        }
    }
    ctx->pc = 0x32DEE4u;
label_32dee4:
    // 0x32dee4: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x32dee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x32dee8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32dee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32deec: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x32deecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x32def0: 0xc0c9d74  jal         func_3275D0
    ctx->pc = 0x32DEF0u;
    SET_GPR_U32(ctx, 31, 0x32DEF8u);
    ctx->pc = 0x32DEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DEF0u;
    // 0x32def4: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275D0u, 0x32DEF0u, 0x32DEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DEF8u;
label_32def8:
    // 0x32def8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32defc:
    // 0x32defc: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x32defcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x32df00: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x32DF00u;
    {
        const bool branch_taken_0x32df00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DF00u;
        // 0x32df04: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32df00) {
            ctx->pc = 0x32DF28u;
            goto label_32df28;
        }
    }
    ctx->pc = 0x32DF08u;
    // 0x32df08: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32DF08u;
    SET_GPR_U32(ctx, 31, 0x32DF10u);
    ctx->pc = 0x32DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DF08u;
    // 0x32df0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32DF08u, 0x32DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF10u;
label_32df10:
    // 0x32df10: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32df14: 0x505e0004  beql        $v0, $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x32DF14u;
    {
        const bool branch_taken_0x32df14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x32df14) {
            ctx->pc = 0x32DF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DF14u;
            // 0x32df18: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DF28u;
            goto label_32df28;
        }
    }
    ctx->pc = 0x32DF1Cu;
    // 0x32df1c: 0x5457ffde  bnel        $v0, $s7, . + 4 + (-0x22 << 2)
    ctx->pc = 0x32DF1Cu;
    {
        const bool branch_taken_0x32df1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x32df1c) {
            ctx->pc = 0x32DF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DF1Cu;
            // 0x32df20: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32de98;
        }
    }
    ctx->pc = 0x32DF24u;
    // 0x32df24: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x32df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_32df28:
    // 0x32df28: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x32df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x32df2c: 0x282001a  div         $zero, $s4, $v0
    ctx->pc = 0x32df2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32df30: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32DF30u;
    {
        const bool branch_taken_0x32df30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32df30) {
            ctx->pc = 0x32DF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DF30u;
            // 0x32df34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DF38u;
            goto label_32df38;
        }
    }
    ctx->pc = 0x32DF38u;
label_32df38:
    // 0x32df38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32df38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df3c: 0x3012  mflo        $a2
    ctx->pc = 0x32df3cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x32df40: 0x3810  mfhi        $a3
    ctx->pc = 0x32df40u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x32df44: 0xc0c9d74  jal         func_3275D0
    ctx->pc = 0x32DF44u;
    SET_GPR_U32(ctx, 31, 0x32DF4Cu);
    ctx->pc = 0x32DF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DF44u;
    // 0x32df48: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275D0u, 0x32DF44u, 0x32DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF4Cu;
label_32df4c:
    // 0x32df4c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x32df4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df50: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x32df50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32df54: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x32df54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32df58: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x32df58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32df5c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x32df5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32df60: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32df60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32df64: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x32df64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32df68: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x32df68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32df6c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x32df6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32df70: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x32df70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32df74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32df74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32df78: 0x3e00008  jr          $ra
    ctx->pc = 0x32DF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DF78u;
        // 0x32df7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DF80u;
}
