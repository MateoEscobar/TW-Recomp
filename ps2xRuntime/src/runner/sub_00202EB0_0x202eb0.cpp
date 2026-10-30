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

// Function: sub_00202EB0
// Address: 0x202eb0 - 0x202fc0
void sub_00202EB0_0x202eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202EB0_0x202eb0");
#endif

    switch (ctx->pc) {
        case 0x202eb0u: goto label_202eb0;
        case 0x202eb4u: goto label_202eb4;
        case 0x202eb8u: goto label_202eb8;
        case 0x202ebcu: goto label_202ebc;
        case 0x202ec0u: goto label_202ec0;
        case 0x202ec4u: goto label_202ec4;
        case 0x202ec8u: goto label_202ec8;
        case 0x202eccu: goto label_202ecc;
        case 0x202ed0u: goto label_202ed0;
        case 0x202ed4u: goto label_202ed4;
        case 0x202ed8u: goto label_202ed8;
        case 0x202edcu: goto label_202edc;
        case 0x202ee0u: goto label_202ee0;
        case 0x202ee4u: goto label_202ee4;
        case 0x202ee8u: goto label_202ee8;
        case 0x202eecu: goto label_202eec;
        case 0x202ef0u: goto label_202ef0;
        case 0x202ef4u: goto label_202ef4;
        case 0x202ef8u: goto label_202ef8;
        case 0x202efcu: goto label_202efc;
        case 0x202f00u: goto label_202f00;
        case 0x202f04u: goto label_202f04;
        case 0x202f08u: goto label_202f08;
        case 0x202f0cu: goto label_202f0c;
        case 0x202f10u: goto label_202f10;
        case 0x202f14u: goto label_202f14;
        case 0x202f18u: goto label_202f18;
        case 0x202f1cu: goto label_202f1c;
        case 0x202f20u: goto label_202f20;
        case 0x202f24u: goto label_202f24;
        case 0x202f28u: goto label_202f28;
        case 0x202f2cu: goto label_202f2c;
        case 0x202f30u: goto label_202f30;
        case 0x202f34u: goto label_202f34;
        case 0x202f38u: goto label_202f38;
        case 0x202f3cu: goto label_202f3c;
        case 0x202f40u: goto label_202f40;
        case 0x202f44u: goto label_202f44;
        case 0x202f48u: goto label_202f48;
        case 0x202f4cu: goto label_202f4c;
        case 0x202f50u: goto label_202f50;
        case 0x202f54u: goto label_202f54;
        case 0x202f58u: goto label_202f58;
        case 0x202f5cu: goto label_202f5c;
        case 0x202f60u: goto label_202f60;
        case 0x202f64u: goto label_202f64;
        case 0x202f68u: goto label_202f68;
        case 0x202f6cu: goto label_202f6c;
        case 0x202f70u: goto label_202f70;
        case 0x202f74u: goto label_202f74;
        case 0x202f78u: goto label_202f78;
        case 0x202f7cu: goto label_202f7c;
        case 0x202f80u: goto label_202f80;
        case 0x202f84u: goto label_202f84;
        case 0x202f88u: goto label_202f88;
        case 0x202f8cu: goto label_202f8c;
        case 0x202f90u: goto label_202f90;
        case 0x202f94u: goto label_202f94;
        case 0x202f98u: goto label_202f98;
        case 0x202f9cu: goto label_202f9c;
        case 0x202fa0u: goto label_202fa0;
        case 0x202fa4u: goto label_202fa4;
        case 0x202fa8u: goto label_202fa8;
        case 0x202facu: goto label_202fac;
        case 0x202fb0u: goto label_202fb0;
        case 0x202fb4u: goto label_202fb4;
        case 0x202fb8u: goto label_202fb8;
        case 0x202fbcu: goto label_202fbc;
        default: break;
    }

    ctx->pc = 0x202eb0u;

label_202eb0:
    // 0x202eb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x202eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_202eb4:
    // 0x202eb4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x202eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_202eb8:
    // 0x202eb8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x202eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_202ebc:
    // 0x202ebc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202ec0:
    // 0x202ec0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x202ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_202ec4:
    // 0x202ec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x202ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_202ec8:
    // 0x202ec8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x202ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_202ecc:
    // 0x202ecc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x202eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_202ed0:
    // 0x202ed0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x202ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202ed4:
    // 0x202ed4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x202ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_202ed8:
    // 0x202ed8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x202ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_202edc:
    // 0x202edc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x202edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_202ee0:
    // 0x202ee0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x202ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_202ee4:
    // 0x202ee4: 0x40f809  jalr        $v0
label_202ee8:
    if (ctx->pc == 0x202EE8u) {
        ctx->pc = 0x202EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EE4u;
        // 0x202ee8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202EECu;
        goto label_202eec;
    }
    ctx->pc = 0x202EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202EECu);
        ctx->pc = 0x202EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EE4u;
        // 0x202ee8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202EE4u, 0x202EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202EECu;
label_202eec:
    // 0x202eec: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x202eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_202ef0:
    // 0x202ef0: 0x2472ef80  addiu       $s2, $v1, -0x1080
    ctx->pc = 0x202ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963072));
label_202ef4:
    // 0x202ef4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x202ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_202ef8:
    // 0x202ef8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x202ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_202efc:
    // 0x202efc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x202efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_202f00:
    // 0x202f00: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x202f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_202f04:
    // 0x202f04: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x202f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_202f08:
    // 0x202f08: 0x60f809  jalr        $v1
label_202f0c:
    if (ctx->pc == 0x202F0Cu) {
        ctx->pc = 0x202F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F08u;
        // 0x202f0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F10u;
        goto label_202f10;
    }
    ctx->pc = 0x202F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x202F10u);
        ctx->pc = 0x202F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F08u;
        // 0x202f0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202F08u, 0x202F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202F10u;
label_202f10:
    // 0x202f10: 0x103140  sll         $a2, $s0, 5
    ctx->pc = 0x202f10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_202f14:
    // 0x202f14: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x202f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_202f18:
    // 0x202f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202f1c:
    // 0x202f1c: 0x0  nop
    ctx->pc = 0x202f1cu;
    // NOP
label_202f20:
    // 0x202f20: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x202f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_202f24:
    // 0x202f24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x202f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_202f28:
    // 0x202f28: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_202f2c:
    if (ctx->pc == 0x202F2Cu) {
        ctx->pc = 0x202F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F28u;
        // 0x202f2c: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F30u;
        goto label_202f30;
    }
    ctx->pc = 0x202F28u;
    {
        const bool branch_taken_0x202f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F28u;
        // 0x202f2c: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f28) {
            ctx->pc = 0x202F54u;
            goto label_202f54;
        }
    }
    ctx->pc = 0x202F30u;
label_202f30:
    // 0x202f30: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x202f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_202f34:
    // 0x202f34: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x202f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_202f38:
    // 0x202f38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x202f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_202f3c:
    // 0x202f3c: 0x932004  sllv        $a0, $s3, $a0
    ctx->pc = 0x202f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
label_202f40:
    // 0x202f40: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x202f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_202f44:
    // 0x202f44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x202f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_202f48:
    // 0x202f48: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x202f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_202f4c:
    // 0x202f4c: 0x1000000a  b           . + 4 + (0xA << 2)
label_202f50:
    if (ctx->pc == 0x202F50u) {
        ctx->pc = 0x202F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F4Cu;
        // 0x202f50: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F54u;
        goto label_202f54;
    }
    ctx->pc = 0x202F4Cu;
    {
        const bool branch_taken_0x202f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F4Cu;
        // 0x202f50: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f4c) {
            ctx->pc = 0x202F78u;
            goto label_202f78;
        }
    }
    ctx->pc = 0x202F54u;
label_202f54:
    // 0x202f54: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x202f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_202f58:
    // 0x202f58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x202f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_202f5c:
    // 0x202f5c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x202f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_202f60:
    // 0x202f60: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x202f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_202f64:
    // 0x202f64: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x202f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
label_202f68:
    // 0x202f68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x202f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_202f6c:
    // 0x202f6c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x202f6cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_202f70:
    // 0x202f70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_202f74:
    // 0x202f74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x202f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_202f78:
    // 0x202f78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x202f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_202f7c:
    // 0x202f7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x202f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_202f80:
    // 0x202f80: 0x2ca30020  sltiu       $v1, $a1, 0x20
    ctx->pc = 0x202f80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_202f84:
    // 0x202f84: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x202f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_202f88:
    // 0x202f88: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_202f8c:
    if (ctx->pc == 0x202F8Cu) {
        ctx->pc = 0x202F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F88u;
        // 0x202f8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F90u;
        goto label_202f90;
    }
    ctx->pc = 0x202F88u;
    {
        const bool branch_taken_0x202f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F88u;
        // 0x202f8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f88) {
            ctx->pc = 0x202F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202f20;
        }
    }
    ctx->pc = 0x202F90u;
label_202f90:
    // 0x202f90: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x202f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_202f94:
    // 0x202f94: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x202f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_202f98:
    // 0x202f98: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
label_202f9c:
    if (ctx->pc == 0x202F9Cu) {
        ctx->pc = 0x202F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F98u;
        // 0x202f9c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202FA0u;
        goto label_202fa0;
    }
    ctx->pc = 0x202F98u;
    {
        const bool branch_taken_0x202f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202f98) {
            ctx->pc = 0x202F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202F98u;
            // 0x202f9c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202ef8;
        }
    }
    ctx->pc = 0x202FA0u;
label_202fa0:
    // 0x202fa0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x202fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_202fa4:
    // 0x202fa4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x202fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_202fa8:
    // 0x202fa8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x202fa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_202fac:
    // 0x202fac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x202facu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_202fb0:
    // 0x202fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x202fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_202fb4:
    // 0x202fb4: 0x3e00008  jr          $ra
label_202fb8:
    if (ctx->pc == 0x202FB8u) {
        ctx->pc = 0x202FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FB4u;
        // 0x202fb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202FBCu;
        goto label_202fbc;
    }
    ctx->pc = 0x202FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FB4u;
        // 0x202fb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202FBCu;
label_202fbc:
    // 0x202fbc: 0x0  nop
    ctx->pc = 0x202fbcu;
    // NOP
    ctx->pc = 0x202fc0u;
}
