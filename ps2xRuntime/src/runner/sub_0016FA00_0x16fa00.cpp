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

// Function: sub_0016FA00
// Address: 0x16fa00 - 0x16fcc8
void sub_0016FA00_0x16fa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FA00_0x16fa00");
#endif

    switch (ctx->pc) {
        case 0x16fa00u: goto label_16fa00;
        case 0x16fa04u: goto label_16fa04;
        case 0x16fa08u: goto label_16fa08;
        case 0x16fa0cu: goto label_16fa0c;
        case 0x16fa10u: goto label_16fa10;
        case 0x16fa14u: goto label_16fa14;
        case 0x16fa18u: goto label_16fa18;
        case 0x16fa1cu: goto label_16fa1c;
        case 0x16fa20u: goto label_16fa20;
        case 0x16fa24u: goto label_16fa24;
        case 0x16fa28u: goto label_16fa28;
        case 0x16fa2cu: goto label_16fa2c;
        case 0x16fa30u: goto label_16fa30;
        case 0x16fa34u: goto label_16fa34;
        case 0x16fa38u: goto label_16fa38;
        case 0x16fa3cu: goto label_16fa3c;
        case 0x16fa40u: goto label_16fa40;
        case 0x16fa44u: goto label_16fa44;
        case 0x16fa48u: goto label_16fa48;
        case 0x16fa4cu: goto label_16fa4c;
        case 0x16fa50u: goto label_16fa50;
        case 0x16fa54u: goto label_16fa54;
        case 0x16fa58u: goto label_16fa58;
        case 0x16fa5cu: goto label_16fa5c;
        case 0x16fa60u: goto label_16fa60;
        case 0x16fa64u: goto label_16fa64;
        case 0x16fa68u: goto label_16fa68;
        case 0x16fa6cu: goto label_16fa6c;
        case 0x16fa70u: goto label_16fa70;
        case 0x16fa74u: goto label_16fa74;
        case 0x16fa78u: goto label_16fa78;
        case 0x16fa7cu: goto label_16fa7c;
        case 0x16fa80u: goto label_16fa80;
        case 0x16fa84u: goto label_16fa84;
        case 0x16fa88u: goto label_16fa88;
        case 0x16fa8cu: goto label_16fa8c;
        case 0x16fa90u: goto label_16fa90;
        case 0x16fa94u: goto label_16fa94;
        case 0x16fa98u: goto label_16fa98;
        case 0x16fa9cu: goto label_16fa9c;
        case 0x16faa0u: goto label_16faa0;
        case 0x16faa4u: goto label_16faa4;
        case 0x16faa8u: goto label_16faa8;
        case 0x16faacu: goto label_16faac;
        case 0x16fab0u: goto label_16fab0;
        case 0x16fab4u: goto label_16fab4;
        case 0x16fab8u: goto label_16fab8;
        case 0x16fabcu: goto label_16fabc;
        case 0x16fac0u: goto label_16fac0;
        case 0x16fac4u: goto label_16fac4;
        case 0x16fac8u: goto label_16fac8;
        case 0x16faccu: goto label_16facc;
        case 0x16fad0u: goto label_16fad0;
        case 0x16fad4u: goto label_16fad4;
        case 0x16fad8u: goto label_16fad8;
        case 0x16fadcu: goto label_16fadc;
        case 0x16fae0u: goto label_16fae0;
        case 0x16fae4u: goto label_16fae4;
        case 0x16fae8u: goto label_16fae8;
        case 0x16faecu: goto label_16faec;
        case 0x16faf0u: goto label_16faf0;
        case 0x16faf4u: goto label_16faf4;
        case 0x16faf8u: goto label_16faf8;
        case 0x16fafcu: goto label_16fafc;
        case 0x16fb00u: goto label_16fb00;
        case 0x16fb04u: goto label_16fb04;
        case 0x16fb08u: goto label_16fb08;
        case 0x16fb0cu: goto label_16fb0c;
        case 0x16fb10u: goto label_16fb10;
        case 0x16fb14u: goto label_16fb14;
        case 0x16fb18u: goto label_16fb18;
        case 0x16fb1cu: goto label_16fb1c;
        case 0x16fb20u: goto label_16fb20;
        case 0x16fb24u: goto label_16fb24;
        case 0x16fb28u: goto label_16fb28;
        case 0x16fb2cu: goto label_16fb2c;
        case 0x16fb30u: goto label_16fb30;
        case 0x16fb34u: goto label_16fb34;
        case 0x16fb38u: goto label_16fb38;
        case 0x16fb3cu: goto label_16fb3c;
        case 0x16fb40u: goto label_16fb40;
        case 0x16fb44u: goto label_16fb44;
        case 0x16fb48u: goto label_16fb48;
        case 0x16fb4cu: goto label_16fb4c;
        case 0x16fb50u: goto label_16fb50;
        case 0x16fb54u: goto label_16fb54;
        case 0x16fb58u: goto label_16fb58;
        case 0x16fb5cu: goto label_16fb5c;
        case 0x16fb60u: goto label_16fb60;
        case 0x16fb64u: goto label_16fb64;
        case 0x16fb68u: goto label_16fb68;
        case 0x16fb6cu: goto label_16fb6c;
        case 0x16fb70u: goto label_16fb70;
        case 0x16fb74u: goto label_16fb74;
        case 0x16fb78u: goto label_16fb78;
        case 0x16fb7cu: goto label_16fb7c;
        case 0x16fb80u: goto label_16fb80;
        case 0x16fb84u: goto label_16fb84;
        case 0x16fb88u: goto label_16fb88;
        case 0x16fb8cu: goto label_16fb8c;
        case 0x16fb90u: goto label_16fb90;
        case 0x16fb94u: goto label_16fb94;
        case 0x16fb98u: goto label_16fb98;
        case 0x16fb9cu: goto label_16fb9c;
        case 0x16fba0u: goto label_16fba0;
        case 0x16fba4u: goto label_16fba4;
        case 0x16fba8u: goto label_16fba8;
        case 0x16fbacu: goto label_16fbac;
        case 0x16fbb0u: goto label_16fbb0;
        case 0x16fbb4u: goto label_16fbb4;
        case 0x16fbb8u: goto label_16fbb8;
        case 0x16fbbcu: goto label_16fbbc;
        case 0x16fbc0u: goto label_16fbc0;
        case 0x16fbc4u: goto label_16fbc4;
        case 0x16fbc8u: goto label_16fbc8;
        case 0x16fbccu: goto label_16fbcc;
        case 0x16fbd0u: goto label_16fbd0;
        case 0x16fbd4u: goto label_16fbd4;
        case 0x16fbd8u: goto label_16fbd8;
        case 0x16fbdcu: goto label_16fbdc;
        case 0x16fbe0u: goto label_16fbe0;
        case 0x16fbe4u: goto label_16fbe4;
        case 0x16fbe8u: goto label_16fbe8;
        case 0x16fbecu: goto label_16fbec;
        case 0x16fbf0u: goto label_16fbf0;
        case 0x16fbf4u: goto label_16fbf4;
        case 0x16fbf8u: goto label_16fbf8;
        case 0x16fbfcu: goto label_16fbfc;
        case 0x16fc00u: goto label_16fc00;
        case 0x16fc04u: goto label_16fc04;
        case 0x16fc08u: goto label_16fc08;
        case 0x16fc0cu: goto label_16fc0c;
        case 0x16fc10u: goto label_16fc10;
        case 0x16fc14u: goto label_16fc14;
        case 0x16fc18u: goto label_16fc18;
        case 0x16fc1cu: goto label_16fc1c;
        case 0x16fc20u: goto label_16fc20;
        case 0x16fc24u: goto label_16fc24;
        case 0x16fc28u: goto label_16fc28;
        case 0x16fc2cu: goto label_16fc2c;
        case 0x16fc30u: goto label_16fc30;
        case 0x16fc34u: goto label_16fc34;
        case 0x16fc38u: goto label_16fc38;
        case 0x16fc3cu: goto label_16fc3c;
        case 0x16fc40u: goto label_16fc40;
        case 0x16fc44u: goto label_16fc44;
        case 0x16fc48u: goto label_16fc48;
        case 0x16fc4cu: goto label_16fc4c;
        case 0x16fc50u: goto label_16fc50;
        case 0x16fc54u: goto label_16fc54;
        case 0x16fc58u: goto label_16fc58;
        case 0x16fc5cu: goto label_16fc5c;
        case 0x16fc60u: goto label_16fc60;
        case 0x16fc64u: goto label_16fc64;
        case 0x16fc68u: goto label_16fc68;
        case 0x16fc6cu: goto label_16fc6c;
        case 0x16fc70u: goto label_16fc70;
        case 0x16fc74u: goto label_16fc74;
        case 0x16fc78u: goto label_16fc78;
        case 0x16fc7cu: goto label_16fc7c;
        case 0x16fc80u: goto label_16fc80;
        case 0x16fc84u: goto label_16fc84;
        case 0x16fc88u: goto label_16fc88;
        case 0x16fc8cu: goto label_16fc8c;
        case 0x16fc90u: goto label_16fc90;
        case 0x16fc94u: goto label_16fc94;
        case 0x16fc98u: goto label_16fc98;
        case 0x16fc9cu: goto label_16fc9c;
        case 0x16fca0u: goto label_16fca0;
        case 0x16fca4u: goto label_16fca4;
        case 0x16fca8u: goto label_16fca8;
        case 0x16fcacu: goto label_16fcac;
        case 0x16fcb0u: goto label_16fcb0;
        case 0x16fcb4u: goto label_16fcb4;
        case 0x16fcb8u: goto label_16fcb8;
        case 0x16fcbcu: goto label_16fcbc;
        case 0x16fcc0u: goto label_16fcc0;
        case 0x16fcc4u: goto label_16fcc4;
        default: break;
    }

    ctx->pc = 0x16fa00u;

label_16fa00:
    // 0x16fa00: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x16fa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_16fa04:
    // 0x16fa04: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x16fa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_16fa08:
    // 0x16fa08: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x16fa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_16fa0c:
    // 0x16fa0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16fa0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16fa10:
    // 0x16fa10: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x16fa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_16fa14:
    // 0x16fa14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16fa14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16fa18:
    // 0x16fa18: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x16fa18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16fa1c:
    // 0x16fa1c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x16fa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_16fa20:
    // 0x16fa20: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x16fa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_16fa24:
    // 0x16fa24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16fa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16fa28:
    // 0x16fa28: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x16fa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_16fa2c:
    // 0x16fa2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fa2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fa30:
    // 0x16fa30: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x16fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_16fa34:
    // 0x16fa34: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x16fa34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_16fa38:
    // 0x16fa38: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x16fa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_16fa3c:
    // 0x16fa3c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x16fa3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fa40:
    // 0x16fa40: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_16fa44:
    // 0x16fa44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16fa44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fa48:
    // 0x16fa48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16fa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16fa4c:
    // 0x16fa4c: 0xc10c1fa  jal         func_4307E8
label_16fa50:
    if (ctx->pc == 0x16FA50u) {
        ctx->pc = 0x16FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA4Cu;
        // 0x16fa50: 0xafa70044  sw          $a3, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FA54u;
        goto label_16fa54;
    }
    ctx->pc = 0x16FA4Cu;
    SET_GPR_U32(ctx, 31, 0x16FA54u);
    ctx->pc = 0x16FA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA4Cu;
    // 0x16fa50: 0xafa70044  sw          $a3, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x16FA4Cu, 0x16FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA54u;
label_16fa54:
    // 0x16fa54: 0xc061664  jal         func_185990
label_16fa58:
    if (ctx->pc == 0x16FA58u) {
        ctx->pc = 0x16FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA54u;
        // 0x16fa58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FA5Cu;
        goto label_16fa5c;
    }
    ctx->pc = 0x16FA54u;
    SET_GPR_U32(ctx, 31, 0x16FA5Cu);
    ctx->pc = 0x16FA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA54u;
    // 0x16fa58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185990u, 0x16FA54u, 0x16FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA5Cu;
label_16fa5c:
    // 0x16fa5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16fa60:
    if (ctx->pc == 0x16FA60u) {
        ctx->pc = 0x16FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA5Cu;
        // 0x16fa60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FA64u;
        goto label_16fa64;
    }
    ctx->pc = 0x16FA5Cu;
    {
        const bool branch_taken_0x16fa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA5Cu;
        // 0x16fa60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa5c) {
            ctx->pc = 0x16FA78u;
            goto label_16fa78;
        }
    }
    ctx->pc = 0x16FA64u;
label_16fa64:
    // 0x16fa64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16fa64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16fa68:
    // 0x16fa68: 0xc05be60  jal         func_16F980
label_16fa6c:
    if (ctx->pc == 0x16FA6Cu) {
        ctx->pc = 0x16FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA68u;
        // 0x16fa6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FA70u;
        goto label_16fa70;
    }
    ctx->pc = 0x16FA68u;
    SET_GPR_U32(ctx, 31, 0x16FA70u);
    ctx->pc = 0x16FA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA68u;
    // 0x16fa6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F980u, 0x16FA68u, 0x16FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA70u;
label_16fa70:
    // 0x16fa70: 0x10000087  b           . + 4 + (0x87 << 2)
label_16fa74:
    if (ctx->pc == 0x16FA74u) {
        ctx->pc = 0x16FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA70u;
        // 0x16fa74: 0x2b00a  movz        $s6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FA78u;
        goto label_16fa78;
    }
    ctx->pc = 0x16FA70u;
    {
        const bool branch_taken_0x16fa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA70u;
        // 0x16fa74: 0x2b00a  movz        $s6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa70) {
            ctx->pc = 0x16FC90u;
            goto label_16fc90;
        }
    }
    ctx->pc = 0x16FA78u;
label_16fa78:
    // 0x16fa78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16fa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16fa7c:
    // 0x16fa7c: 0xc05be60  jal         func_16F980
label_16fa80:
    if (ctx->pc == 0x16FA80u) {
        ctx->pc = 0x16FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA7Cu;
        // 0x16fa80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FA84u;
        goto label_16fa84;
    }
    ctx->pc = 0x16FA7Cu;
    SET_GPR_U32(ctx, 31, 0x16FA84u);
    ctx->pc = 0x16FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA7Cu;
    // 0x16fa80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F980u, 0x16FA7Cu, 0x16FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA84u;
label_16fa84:
    // 0x16fa84: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
label_16fa88:
    if (ctx->pc == 0x16FA88u) {
        ctx->pc = 0x16FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA84u;
        // 0x16fa88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FA8Cu;
        goto label_16fa8c;
    }
    ctx->pc = 0x16FA84u;
    {
        const bool branch_taken_0x16fa84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA84u;
        // 0x16fa88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa84) {
            ctx->pc = 0x16FC94u;
            goto label_16fc94;
        }
    }
    ctx->pc = 0x16FA8Cu;
label_16fa8c:
    // 0x16fa8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16fa90:
    // 0x16fa90: 0x26720050  addiu       $s2, $s3, 0x50
    ctx->pc = 0x16fa90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_16fa94:
    // 0x16fa94: 0x8c5127e4  lw          $s1, 0x27E4($v0)
    ctx->pc = 0x16fa94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_16fa98:
    // 0x16fa98: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x16fa98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fa9c:
    // 0x16fa9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16faa0:
    // 0x16faa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16faa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16faa4:
    // 0x16faa4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x16faa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16faa8:
    // 0x16faa8: 0xafb20048  sw          $s2, 0x48($sp)
    ctx->pc = 0x16faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
label_16faac:
    // 0x16faac: 0x860200b8  lh          $v0, 0xB8($s0)
    ctx->pc = 0x16faacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
label_16fab0:
    // 0x16fab0: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x16fab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_16fab4:
    // 0x16fab4: 0xc061e6e  jal         func_1879B8
label_16fab8:
    if (ctx->pc == 0x16FAB8u) {
        ctx->pc = 0x16FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAB4u;
        // 0x16fab8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FABCu;
        goto label_16fabc;
    }
    ctx->pc = 0x16FAB4u;
    SET_GPR_U32(ctx, 31, 0x16FABCu);
    ctx->pc = 0x16FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FAB4u;
    // 0x16fab8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x16FAB4u, 0x16FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FABCu;
label_16fabc:
    // 0x16fabc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16fac0:
    // 0x16fac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16fac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fac4:
    // 0x16fac4: 0x60f809  jalr        $v1
label_16fac8:
    if (ctx->pc == 0x16FAC8u) {
        ctx->pc = 0x16FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAC4u;
        // 0x16fac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FACCu;
        goto label_16facc;
    }
    ctx->pc = 0x16FAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FACCu);
        ctx->pc = 0x16FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAC4u;
        // 0x16fac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FAC4u, 0x16FACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FACCu;
label_16facc:
    // 0x16facc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16faccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_16fad0:
    // 0x16fad0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16fad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16fad4:
    // 0x16fad4: 0xc050fda  jal         func_143F68
label_16fad8:
    if (ctx->pc == 0x16FAD8u) {
        ctx->pc = 0x16FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAD4u;
        // 0x16fad8: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FADCu;
        goto label_16fadc;
    }
    ctx->pc = 0x16FAD4u;
    SET_GPR_U32(ctx, 31, 0x16FADCu);
    ctx->pc = 0x16FAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FAD4u;
    // 0x16fad8: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x16FAD4u, 0x16FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FADCu;
label_16fadc:
    // 0x16fadc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x16fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_16fae0:
    // 0x16fae0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16fae4:
    // 0x16fae4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16fae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16fae8:
    // 0x16fae8: 0xc137950  jal         func_4DE540
label_16faec:
    if (ctx->pc == 0x16FAECu) {
        ctx->pc = 0x16FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAE8u;
        // 0x16faec: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FAF0u;
        goto label_16faf0;
    }
    ctx->pc = 0x16FAE8u;
    SET_GPR_U32(ctx, 31, 0x16FAF0u);
    ctx->pc = 0x16FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FAE8u;
    // 0x16faec: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE540u, 0x16FAE8u, 0x16FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FAF0u;
label_16faf0:
    // 0x16faf0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x16faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16faf4:
    // 0x16faf4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16faf8:
    // 0x16faf8: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_16fafc:
    if (ctx->pc == 0x16FAFCu) {
        ctx->pc = 0x16FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAF8u;
        // 0x16fafc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB00u;
        goto label_16fb00;
    }
    ctx->pc = 0x16FAF8u;
    {
        const bool branch_taken_0x16faf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAF8u;
        // 0x16fafc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faf8) {
            ctx->pc = 0x16FBBCu;
            goto label_16fbbc;
        }
    }
    ctx->pc = 0x16FB00u;
label_16fb00:
    // 0x16fb00: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x16fb00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_16fb04:
    // 0x16fb04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16fb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16fb08:
    // 0x16fb08: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x16fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_16fb0c:
    // 0x16fb0c: 0xc061e58  jal         func_187960
label_16fb10:
    if (ctx->pc == 0x16FB10u) {
        ctx->pc = 0x16FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB0Cu;
        // 0x16fb10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB14u;
        goto label_16fb14;
    }
    ctx->pc = 0x16FB0Cu;
    SET_GPR_U32(ctx, 31, 0x16FB14u);
    ctx->pc = 0x16FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB0Cu;
    // 0x16fb10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x16FB0Cu, 0x16FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB14u;
label_16fb14:
    // 0x16fb14: 0xc061234  jal         func_1848D0
label_16fb18:
    if (ctx->pc == 0x16FB18u) {
        ctx->pc = 0x16FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB14u;
        // 0x16fb18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB1Cu;
        goto label_16fb1c;
    }
    ctx->pc = 0x16FB14u;
    SET_GPR_U32(ctx, 31, 0x16FB1Cu);
    ctx->pc = 0x16FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB14u;
    // 0x16fb18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848D0u, 0x16FB14u, 0x16FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB1Cu;
label_16fb1c:
    // 0x16fb1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16fb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fb20:
    // 0x16fb20: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x16fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_16fb24:
    // 0x16fb24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16fb28:
    if (ctx->pc == 0x16FB28u) {
        ctx->pc = 0x16FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB24u;
        // 0x16fb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB2Cu;
        goto label_16fb2c;
    }
    ctx->pc = 0x16FB24u;
    {
        const bool branch_taken_0x16fb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB24u;
        // 0x16fb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb24) {
            ctx->pc = 0x16FB40u;
            goto label_16fb40;
        }
    }
    ctx->pc = 0x16FB2Cu;
label_16fb2c:
    // 0x16fb2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16fb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16fb30:
    // 0x16fb30: 0xc061f4a  jal         func_187D28
label_16fb34:
    if (ctx->pc == 0x16FB34u) {
        ctx->pc = 0x16FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB30u;
        // 0x16fb34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB38u;
        goto label_16fb38;
    }
    ctx->pc = 0x16FB30u;
    SET_GPR_U32(ctx, 31, 0x16FB38u);
    ctx->pc = 0x16FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB30u;
    // 0x16fb34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x16FB30u, 0x16FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB38u;
label_16fb38:
    // 0x16fb38: 0x1000000a  b           . + 4 + (0xA << 2)
label_16fb3c:
    if (ctx->pc == 0x16FB3Cu) {
        ctx->pc = 0x16FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB38u;
        // 0x16fb3c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB40u;
        goto label_16fb40;
    }
    ctx->pc = 0x16FB38u;
    {
        const bool branch_taken_0x16fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB38u;
        // 0x16fb3c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb38) {
            ctx->pc = 0x16FB64u;
            goto label_16fb64;
        }
    }
    ctx->pc = 0x16FB40u;
label_16fb40:
    // 0x16fb40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16fb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16fb44:
    // 0x16fb44: 0xc061e6e  jal         func_1879B8
label_16fb48:
    if (ctx->pc == 0x16FB48u) {
        ctx->pc = 0x16FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB44u;
        // 0x16fb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB4Cu;
        goto label_16fb4c;
    }
    ctx->pc = 0x16FB44u;
    SET_GPR_U32(ctx, 31, 0x16FB4Cu);
    ctx->pc = 0x16FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB44u;
    // 0x16fb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x16FB44u, 0x16FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB4Cu;
label_16fb4c:
    // 0x16fb4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16fb50:
    // 0x16fb50: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x16fb50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_16fb54:
    // 0x16fb54: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x16fb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_16fb58:
    // 0x16fb58: 0xa0f809  jalr        $a1
label_16fb5c:
    if (ctx->pc == 0x16FB5Cu) {
        ctx->pc = 0x16FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB58u;
        // 0x16fb5c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB60u;
        goto label_16fb60;
    }
    ctx->pc = 0x16FB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x16FB60u);
        ctx->pc = 0x16FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB58u;
        // 0x16fb5c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FB58u, 0x16FB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FB60u;
label_16fb60:
    // 0x16fb60: 0x202b02b  sltu        $s6, $s0, $v0
    ctx->pc = 0x16fb60u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16fb64:
    // 0x16fb64: 0x12c00019  beqz        $s6, . + 4 + (0x19 << 2)
label_16fb68:
    if (ctx->pc == 0x16FB68u) {
        ctx->pc = 0x16FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB64u;
        // 0x16fb68: 0x8ee927e4  lw          $t1, 0x27E4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB6Cu;
        goto label_16fb6c;
    }
    ctx->pc = 0x16FB64u;
    {
        const bool branch_taken_0x16fb64 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB64u;
        // 0x16fb68: 0x8ee927e4  lw          $t1, 0x27E4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb64) {
            ctx->pc = 0x16FBCCu;
            goto label_16fbcc;
        }
    }
    ctx->pc = 0x16FB6Cu;
label_16fb6c:
    // 0x16fb6c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x16fb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16fb70:
    // 0x16fb70: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x16fb70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_16fb74:
    // 0x16fb74: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x16fb74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_16fb78:
    // 0x16fb78: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x16fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_16fb7c:
    // 0x16fb7c: 0x24a51968  addiu       $a1, $a1, 0x1968
    ctx->pc = 0x16fb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6504));
label_16fb80:
    // 0x16fb80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16fb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16fb84:
    // 0x16fb84: 0x25081900  addiu       $t0, $t0, 0x1900
    ctx->pc = 0x16fb84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6400));
label_16fb88:
    // 0x16fb88: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x16fb88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_16fb8c:
    // 0x16fb8c: 0x254a1970  addiu       $t2, $t2, 0x1970
    ctx->pc = 0x16fb8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6512));
label_16fb90:
    // 0x16fb90: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x16fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_16fb94:
    // 0x16fb94: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x16fb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16fb98:
    // 0x16fb98: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x16fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_16fb9c:
    // 0x16fb9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x16fb9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fba0:
    // 0x16fba0: 0x40f809  jalr        $v0
label_16fba4:
    if (ctx->pc == 0x16FBA4u) {
        ctx->pc = 0x16FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBA0u;
        // 0x16fba4: 0x24090168  addiu       $t1, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FBA8u;
        goto label_16fba8;
    }
    ctx->pc = 0x16FBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16FBA8u);
        ctx->pc = 0x16FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBA0u;
        // 0x16fba4: 0x24090168  addiu       $t1, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FBA0u, 0x16FBA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FBA8u;
label_16fba8:
    // 0x16fba8: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x16fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_16fbac:
    // 0x16fbac: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x16fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_16fbb0:
    // 0x16fbb0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x16fbb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fbb4:
    // 0x16fbb4: 0x10000005  b           . + 4 + (0x5 << 2)
label_16fbb8:
    if (ctx->pc == 0x16FBB8u) {
        ctx->pc = 0x16FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBB4u;
        // 0x16fbb8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FBBCu;
        goto label_16fbbc;
    }
    ctx->pc = 0x16FBB4u;
    {
        const bool branch_taken_0x16fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBB4u;
        // 0x16fbb8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbb4) {
            ctx->pc = 0x16FBCCu;
            goto label_16fbcc;
        }
    }
    ctx->pc = 0x16FBBCu;
label_16fbbc:
    // 0x16fbbc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x16fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16fbc0:
    // 0x16fbc0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16fbc4:
    // 0x16fbc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16fbc8:
    // 0x16fbc8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x16fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_16fbcc:
    // 0x16fbcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16fbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fbd0:
    // 0x16fbd0: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x16fbd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_16fbd4:
    // 0x16fbd4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_16fbd8:
    if (ctx->pc == 0x16FBD8u) {
        ctx->pc = 0x16FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBD4u;
        // 0x16fbd8: 0x3c120055  lui         $s2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FBDCu;
        goto label_16fbdc;
    }
    ctx->pc = 0x16FBD4u;
    {
        const bool branch_taken_0x16fbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBD4u;
        // 0x16fbd8: 0x3c120055  lui         $s2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbd4) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16FBDCu;
label_16fbdc:
    // 0x16fbdc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x16fbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16fbe0:
    // 0x16fbe0: 0x8ee827e4  lw          $t0, 0x27E4($s7)
    ctx->pc = 0x16fbe0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_16fbe4:
    // 0x16fbe4: 0x0  nop
    ctx->pc = 0x16fbe4u;
    // NOP
label_16fbe8:
    // 0x16fbe8: 0x26461900  addiu       $a2, $s2, 0x1900
    ctx->pc = 0x16fbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 6400));
label_16fbec:
    // 0x16fbec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x16fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16fbf0:
    // 0x16fbf0: 0x24070172  addiu       $a3, $zero, 0x172
    ctx->pc = 0x16fbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
label_16fbf4:
    // 0x16fbf4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x16fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_16fbf8:
    // 0x16fbf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16fbf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16fbfc:
    // 0x16fbfc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16fbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_16fc00:
    // 0x16fc00: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x16fc00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_16fc04:
    // 0x16fc04: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x16fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_16fc08:
    // 0x16fc08: 0x60f809  jalr        $v1
label_16fc0c:
    if (ctx->pc == 0x16FC0Cu) {
        ctx->pc = 0x16FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC08u;
        // 0x16fc0c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC10u;
        goto label_16fc10;
    }
    ctx->pc = 0x16FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FC10u);
        ctx->pc = 0x16FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC08u;
        // 0x16fc0c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC08u, 0x16FC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FC10u;
label_16fc10:
    // 0x16fc10: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x16fc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_16fc14:
    // 0x16fc14: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_16fc18:
    if (ctx->pc == 0x16FC18u) {
        ctx->pc = 0x16FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC14u;
        // 0x16fc18: 0x8ee827e4  lw          $t0, 0x27E4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC1Cu;
        goto label_16fc1c;
    }
    ctx->pc = 0x16FC14u;
    {
        const bool branch_taken_0x16fc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC14u;
        // 0x16fc18: 0x8ee827e4  lw          $t0, 0x27E4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc14) {
            ctx->pc = 0x16FBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fbe8;
        }
    }
    ctx->pc = 0x16FC1Cu;
label_16fc1c:
    // 0x16fc1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x16fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_16fc20:
    // 0x16fc20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16fc24:
    // 0x16fc24: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16fc28:
    // 0x16fc28: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_16fc2c:
    if (ctx->pc == 0x16FC2Cu) {
        ctx->pc = 0x16FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC28u;
        // 0x16fc2c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC30u;
        goto label_16fc30;
    }
    ctx->pc = 0x16FC28u;
    {
        const bool branch_taken_0x16fc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC28u;
        // 0x16fc2c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc28) {
            ctx->pc = 0x16FC60u;
            goto label_16fc60;
        }
    }
    ctx->pc = 0x16FC30u;
label_16fc30:
    // 0x16fc30: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x16fc30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16fc34:
    // 0x16fc34: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x16fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_16fc38:
    // 0x16fc38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16fc3c:
    // 0x16fc3c: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x16fc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_16fc40:
    // 0x16fc40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16fc44:
    // 0x16fc44: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_16fc48:
    // 0x16fc48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16fc4c:
    // 0x16fc4c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x16fc4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_16fc50:
    // 0x16fc50: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16fc54:
    // 0x16fc54: 0x40f809  jalr        $v0
label_16fc58:
    if (ctx->pc == 0x16FC58u) {
        ctx->pc = 0x16FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC54u;
        // 0x16fc58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC5Cu;
        goto label_16fc5c;
    }
    ctx->pc = 0x16FC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16FC5Cu);
        ctx->pc = 0x16FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC54u;
        // 0x16fc58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC54u, 0x16FC5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FC5Cu;
label_16fc5c:
    // 0x16fc5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_16fc60:
    // 0x16fc60: 0x8ef127e4  lw          $s1, 0x27E4($s7)
    ctx->pc = 0x16fc60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_16fc64:
    // 0x16fc64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16fc68:
    // 0x16fc68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fc6c:
    // 0x16fc6c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x16fc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16fc70:
    // 0x16fc70: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x16fc70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
label_16fc74:
    // 0x16fc74: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x16fc74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_16fc78:
    // 0x16fc78: 0xc061e6e  jal         func_1879B8
label_16fc7c:
    if (ctx->pc == 0x16FC7Cu) {
        ctx->pc = 0x16FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC78u;
        // 0x16fc7c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC80u;
        goto label_16fc80;
    }
    ctx->pc = 0x16FC78u;
    SET_GPR_U32(ctx, 31, 0x16FC80u);
    ctx->pc = 0x16FC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC78u;
    // 0x16fc7c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x16FC78u, 0x16FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC80u;
label_16fc80:
    // 0x16fc80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16fc84:
    // 0x16fc84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16fc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fc88:
    // 0x16fc88: 0x60f809  jalr        $v1
label_16fc8c:
    if (ctx->pc == 0x16FC8Cu) {
        ctx->pc = 0x16FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC88u;
        // 0x16fc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC90u;
        goto label_16fc90;
    }
    ctx->pc = 0x16FC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FC90u);
        ctx->pc = 0x16FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC88u;
        // 0x16fc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC88u, 0x16FC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FC90u;
label_16fc90:
    // 0x16fc90: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x16fc90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16fc94:
    // 0x16fc94: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x16fc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_16fc98:
    // 0x16fc98: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x16fc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_16fc9c:
    // 0x16fc9c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x16fc9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_16fca0:
    // 0x16fca0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x16fca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_16fca4:
    // 0x16fca4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x16fca4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_16fca8:
    // 0x16fca8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x16fca8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16fcac:
    // 0x16fcac: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x16fcacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16fcb0:
    // 0x16fcb0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16fcb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16fcb4:
    // 0x16fcb4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x16fcb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16fcb8:
    // 0x16fcb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16fcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16fcbc:
    // 0x16fcbc: 0x3e00008  jr          $ra
label_16fcc0:
    if (ctx->pc == 0x16FCC0u) {
        ctx->pc = 0x16FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCBCu;
        // 0x16fcc0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FCC4u;
        goto label_16fcc4;
    }
    ctx->pc = 0x16FCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCBCu;
        // 0x16fcc0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FCC4u;
label_16fcc4:
    // 0x16fcc4: 0x0  nop
    ctx->pc = 0x16fcc4u;
    // NOP
    ctx->pc = 0x16fcc8u;
}
