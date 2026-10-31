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

// Function: sub_00302EB0
// Address: 0x302eb0 - 0x302ff0
void sub_00302EB0_0x302eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302EB0_0x302eb0");
#endif

    switch (ctx->pc) {
        case 0x302eb0u: goto label_302eb0;
        case 0x302eb4u: goto label_302eb4;
        case 0x302eb8u: goto label_302eb8;
        case 0x302ebcu: goto label_302ebc;
        case 0x302ec0u: goto label_302ec0;
        case 0x302ec4u: goto label_302ec4;
        case 0x302ec8u: goto label_302ec8;
        case 0x302eccu: goto label_302ecc;
        case 0x302ed0u: goto label_302ed0;
        case 0x302ed4u: goto label_302ed4;
        case 0x302ed8u: goto label_302ed8;
        case 0x302edcu: goto label_302edc;
        case 0x302ee0u: goto label_302ee0;
        case 0x302ee4u: goto label_302ee4;
        case 0x302ee8u: goto label_302ee8;
        case 0x302eecu: goto label_302eec;
        case 0x302ef0u: goto label_302ef0;
        case 0x302ef4u: goto label_302ef4;
        case 0x302ef8u: goto label_302ef8;
        case 0x302efcu: goto label_302efc;
        case 0x302f00u: goto label_302f00;
        case 0x302f04u: goto label_302f04;
        case 0x302f08u: goto label_302f08;
        case 0x302f0cu: goto label_302f0c;
        case 0x302f10u: goto label_302f10;
        case 0x302f14u: goto label_302f14;
        case 0x302f18u: goto label_302f18;
        case 0x302f1cu: goto label_302f1c;
        case 0x302f20u: goto label_302f20;
        case 0x302f24u: goto label_302f24;
        case 0x302f28u: goto label_302f28;
        case 0x302f2cu: goto label_302f2c;
        case 0x302f30u: goto label_302f30;
        case 0x302f34u: goto label_302f34;
        case 0x302f38u: goto label_302f38;
        case 0x302f3cu: goto label_302f3c;
        case 0x302f40u: goto label_302f40;
        case 0x302f44u: goto label_302f44;
        case 0x302f48u: goto label_302f48;
        case 0x302f4cu: goto label_302f4c;
        case 0x302f50u: goto label_302f50;
        case 0x302f54u: goto label_302f54;
        case 0x302f58u: goto label_302f58;
        case 0x302f5cu: goto label_302f5c;
        case 0x302f60u: goto label_302f60;
        case 0x302f64u: goto label_302f64;
        case 0x302f68u: goto label_302f68;
        case 0x302f6cu: goto label_302f6c;
        case 0x302f70u: goto label_302f70;
        case 0x302f74u: goto label_302f74;
        case 0x302f78u: goto label_302f78;
        case 0x302f7cu: goto label_302f7c;
        case 0x302f80u: goto label_302f80;
        case 0x302f84u: goto label_302f84;
        case 0x302f88u: goto label_302f88;
        case 0x302f8cu: goto label_302f8c;
        case 0x302f90u: goto label_302f90;
        case 0x302f94u: goto label_302f94;
        case 0x302f98u: goto label_302f98;
        case 0x302f9cu: goto label_302f9c;
        case 0x302fa0u: goto label_302fa0;
        case 0x302fa4u: goto label_302fa4;
        case 0x302fa8u: goto label_302fa8;
        case 0x302facu: goto label_302fac;
        case 0x302fb0u: goto label_302fb0;
        case 0x302fb4u: goto label_302fb4;
        case 0x302fb8u: goto label_302fb8;
        case 0x302fbcu: goto label_302fbc;
        case 0x302fc0u: goto label_302fc0;
        case 0x302fc4u: goto label_302fc4;
        case 0x302fc8u: goto label_302fc8;
        case 0x302fccu: goto label_302fcc;
        case 0x302fd0u: goto label_302fd0;
        case 0x302fd4u: goto label_302fd4;
        case 0x302fd8u: goto label_302fd8;
        case 0x302fdcu: goto label_302fdc;
        case 0x302fe0u: goto label_302fe0;
        case 0x302fe4u: goto label_302fe4;
        case 0x302fe8u: goto label_302fe8;
        case 0x302fecu: goto label_302fec;
        default: break;
    }

    ctx->pc = 0x302eb0u;

label_302eb0:
    // 0x302eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x302eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_302eb4:
    // 0x302eb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x302eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_302eb8:
    // 0x302eb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x302eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_302ebc:
    // 0x302ebc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x302ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_302ec0:
    // 0x302ec0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x302ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_302ec4:
    // 0x302ec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x302ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_302ec8:
    // 0x302ec8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x302ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_302ecc:
    // 0x302ecc: 0x12400041  beqz        $s2, . + 4 + (0x41 << 2)
label_302ed0:
    if (ctx->pc == 0x302ED0u) {
        ctx->pc = 0x302ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302ECCu;
        // 0x302ed0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302ED4u;
        goto label_302ed4;
    }
    ctx->pc = 0x302ECCu;
    {
        const bool branch_taken_0x302ecc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x302ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302ECCu;
        // 0x302ed0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ecc) {
            ctx->pc = 0x302FD4u;
            goto label_302fd4;
        }
    }
    ctx->pc = 0x302ED4u;
label_302ed4:
    // 0x302ed4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x302ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_302ed8:
    // 0x302ed8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x302ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_302edc:
    // 0x302edc: 0xc0cd4ee  jal         func_3353B8
label_302ee0:
    if (ctx->pc == 0x302EE0u) {
        ctx->pc = 0x302EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EDCu;
        // 0x302ee0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302EE4u;
        goto label_302ee4;
    }
    ctx->pc = 0x302EDCu;
    SET_GPR_U32(ctx, 31, 0x302EE4u);
    ctx->pc = 0x302EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302EDCu;
    // 0x302ee0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x302EDCu, 0x302EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302EE4u;
label_302ee4:
    // 0x302ee4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x302ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_302ee8:
    // 0x302ee8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_302eec:
    if (ctx->pc == 0x302EECu) {
        ctx->pc = 0x302EF0u;
        goto label_302ef0;
    }
    ctx->pc = 0x302EE8u;
    {
        const bool branch_taken_0x302ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302ee8) {
            ctx->pc = 0x302F38u;
            goto label_302f38;
        }
    }
    ctx->pc = 0x302EF0u;
label_302ef0:
    // 0x302ef0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x302ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302ef4:
    // 0x302ef4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x302ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_302ef8:
    // 0x302ef8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302ef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_302efc:
    // 0x302efc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x302efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302f00:
    // 0x302f00: 0x40f809  jalr        $v0
label_302f04:
    if (ctx->pc == 0x302F04u) {
        ctx->pc = 0x302F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F00u;
        // 0x302f04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F08u;
        goto label_302f08;
    }
    ctx->pc = 0x302F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302F08u);
        ctx->pc = 0x302F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F00u;
        // 0x302f04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302F00u, 0x302F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302F08u;
label_302f08:
    // 0x302f08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x302f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_302f0c:
    // 0x302f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x302f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302f10:
    // 0x302f10: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302f10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_302f14:
    // 0x302f14: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x302f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302f18:
    // 0x302f18: 0x40f809  jalr        $v0
label_302f1c:
    if (ctx->pc == 0x302F1Cu) {
        ctx->pc = 0x302F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F18u;
        // 0x302f1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F20u;
        goto label_302f20;
    }
    ctx->pc = 0x302F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302F20u);
        ctx->pc = 0x302F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F18u;
        // 0x302f1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302F18u, 0x302F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302F20u;
label_302f20:
    // 0x302f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302f24:
    // 0x302f24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x302f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302f28:
    // 0x302f28: 0xc0b222a  jal         func_2C88A8
label_302f2c:
    if (ctx->pc == 0x302F2Cu) {
        ctx->pc = 0x302F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F28u;
        // 0x302f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F30u;
        goto label_302f30;
    }
    ctx->pc = 0x302F28u;
    SET_GPR_U32(ctx, 31, 0x302F30u);
    ctx->pc = 0x302F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302F28u;
    // 0x302f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C88A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C88A8u, 0x302F28u, 0x302F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302F30u;
label_302f30:
    // 0x302f30: 0x10000029  b           . + 4 + (0x29 << 2)
label_302f34:
    if (ctx->pc == 0x302F34u) {
        ctx->pc = 0x302F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F30u;
        // 0x302f34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F38u;
        goto label_302f38;
    }
    ctx->pc = 0x302F30u;
    {
        const bool branch_taken_0x302f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F30u;
        // 0x302f34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f30) {
            ctx->pc = 0x302FD8u;
            goto label_302fd8;
        }
    }
    ctx->pc = 0x302F38u;
label_302f38:
    // 0x302f38: 0xc087502  jal         func_21D408
label_302f3c:
    if (ctx->pc == 0x302F3Cu) {
        ctx->pc = 0x302F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F38u;
        // 0x302f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F40u;
        goto label_302f40;
    }
    ctx->pc = 0x302F38u;
    SET_GPR_U32(ctx, 31, 0x302F40u);
    ctx->pc = 0x302F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302F38u;
    // 0x302f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x302F38u, 0x302F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302F40u;
label_302f40:
    // 0x302f40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x302f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302f44:
    // 0x302f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302f48:
    // 0x302f48: 0xc0a408c  jal         func_290230
label_302f4c:
    if (ctx->pc == 0x302F4Cu) {
        ctx->pc = 0x302F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F48u;
        // 0x302f4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F50u;
        goto label_302f50;
    }
    ctx->pc = 0x302F48u;
    SET_GPR_U32(ctx, 31, 0x302F50u);
    ctx->pc = 0x302F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302F48u;
    // 0x302f4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x302F48u, 0x302F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302F50u;
label_302f50:
    // 0x302f50: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_302f54:
    if (ctx->pc == 0x302F54u) {
        ctx->pc = 0x302F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F50u;
        // 0x302f54: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F58u;
        goto label_302f58;
    }
    ctx->pc = 0x302F50u;
    {
        const bool branch_taken_0x302f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302f50) {
            ctx->pc = 0x302F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302F50u;
            // 0x302f54: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302FD8u;
            goto label_302fd8;
        }
    }
    ctx->pc = 0x302F58u;
label_302f58:
    // 0x302f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302f5c:
    // 0x302f5c: 0xc0a404e  jal         func_290138
label_302f60:
    if (ctx->pc == 0x302F60u) {
        ctx->pc = 0x302F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F5Cu;
        // 0x302f60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F64u;
        goto label_302f64;
    }
    ctx->pc = 0x302F5Cu;
    SET_GPR_U32(ctx, 31, 0x302F64u);
    ctx->pc = 0x302F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302F5Cu;
    // 0x302f60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x302F5Cu, 0x302F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302F64u;
label_302f64:
    // 0x302f64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_302f68:
    if (ctx->pc == 0x302F68u) {
        ctx->pc = 0x302F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F64u;
        // 0x302f68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F6Cu;
        goto label_302f6c;
    }
    ctx->pc = 0x302F64u;
    {
        const bool branch_taken_0x302f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F64u;
        // 0x302f68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f64) {
            ctx->pc = 0x302F7Cu;
            goto label_302f7c;
        }
    }
    ctx->pc = 0x302F6Cu;
label_302f6c:
    // 0x302f6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302f70:
    // 0x302f70: 0xc0a40ca  jal         func_290328
label_302f74:
    if (ctx->pc == 0x302F74u) {
        ctx->pc = 0x302F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F70u;
        // 0x302f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F78u;
        goto label_302f78;
    }
    ctx->pc = 0x302F70u;
    SET_GPR_U32(ctx, 31, 0x302F78u);
    ctx->pc = 0x302F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302F70u;
    // 0x302f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290328u, 0x302F70u, 0x302F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302F78u;
label_302f78:
    // 0x302f78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x302f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_302f7c:
    // 0x302f7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x302f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_302f80:
    // 0x302f80: 0x24063a98  addiu       $a2, $zero, 0x3A98
    ctx->pc = 0x302f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15000));
label_302f84:
    // 0x302f84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x302f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302f88:
    // 0x302f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302f8c:
    // 0x302f8c: 0xc0a34ba  jal         func_28D2E8
label_302f90:
    if (ctx->pc == 0x302F90u) {
        ctx->pc = 0x302F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F8Cu;
        // 0x302f90: 0xae22021c  sw          $v0, 0x21C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F94u;
        goto label_302f94;
    }
    ctx->pc = 0x302F8Cu;
    SET_GPR_U32(ctx, 31, 0x302F94u);
    ctx->pc = 0x302F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302F8Cu;
    // 0x302f90: 0xae22021c  sw          $v0, 0x21C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x302F8Cu, 0x302F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302F94u;
label_302f94:
    // 0x302f94: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x302f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302f98:
    // 0x302f98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x302f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_302f9c:
    // 0x302f9c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_302fa0:
    // 0x302fa0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x302fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302fa4:
    // 0x302fa4: 0x40f809  jalr        $v0
label_302fa8:
    if (ctx->pc == 0x302FA8u) {
        ctx->pc = 0x302FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FA4u;
        // 0x302fa8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302FACu;
        goto label_302fac;
    }
    ctx->pc = 0x302FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302FACu);
        ctx->pc = 0x302FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FA4u;
        // 0x302fa8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302FA4u, 0x302FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302FACu;
label_302fac:
    // 0x302fac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x302facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_302fb0:
    // 0x302fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x302fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302fb4:
    // 0x302fb4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_302fb8:
    // 0x302fb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x302fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302fbc:
    // 0x302fbc: 0x40f809  jalr        $v0
label_302fc0:
    if (ctx->pc == 0x302FC0u) {
        ctx->pc = 0x302FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FBCu;
        // 0x302fc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302FC4u;
        goto label_302fc4;
    }
    ctx->pc = 0x302FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302FC4u);
        ctx->pc = 0x302FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FBCu;
        // 0x302fc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302FBCu, 0x302FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302FC4u;
label_302fc4:
    // 0x302fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302fc8:
    // 0x302fc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x302fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302fcc:
    // 0x302fcc: 0xc0b222a  jal         func_2C88A8
label_302fd0:
    if (ctx->pc == 0x302FD0u) {
        ctx->pc = 0x302FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FCCu;
        // 0x302fd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302FD4u;
        goto label_302fd4;
    }
    ctx->pc = 0x302FCCu;
    SET_GPR_U32(ctx, 31, 0x302FD4u);
    ctx->pc = 0x302FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302FCCu;
    // 0x302fd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C88A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C88A8u, 0x302FCCu, 0x302FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302FD4u;
label_302fd4:
    // 0x302fd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x302fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_302fd8:
    // 0x302fd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x302fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_302fdc:
    // 0x302fdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x302fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302fe0:
    // 0x302fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x302fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_302fe4:
    // 0x302fe4: 0x3e00008  jr          $ra
label_302fe8:
    if (ctx->pc == 0x302FE8u) {
        ctx->pc = 0x302FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FE4u;
        // 0x302fe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302FECu;
        goto label_302fec;
    }
    ctx->pc = 0x302FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FE4u;
        // 0x302fe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302FECu;
label_302fec:
    // 0x302fec: 0x0  nop
    ctx->pc = 0x302fecu;
    // NOP
    ctx->pc = 0x302ff0u;
}
