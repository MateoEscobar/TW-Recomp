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

// Function: sub_00153AC4
// Address: 0x153ac4 - 0x153bd0
void sub_00153AC4_0x153ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153AC4_0x153ac4");
#endif

    ctx->pc = 0x153ac4u;

    // 0x153ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x153AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AC4u;
        // 0x153ac8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153ACCu;
    // 0x153acc: 0x0  nop
    ctx->pc = 0x153accu;
    // NOP
    // 0x153ad0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x153ad0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ad4: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x153AD4u;
    {
        const bool branch_taken_0x153ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x153AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AD4u;
        // 0x153ad8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ad4) {
            ctx->pc = 0x153B98u;
            goto label_153b98;
        }
    }
    ctx->pc = 0x153ADCu;
    // 0x153adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153ae0: 0x166102a  slt         $v0, $t3, $a2
    ctx->pc = 0x153ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x153ae4: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x153ae4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ae8: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x153ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x153aec: 0x2500a  movz        $t2, $zero, $v0
    ctx->pc = 0x153aecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
    // 0x153af0: 0x2d02003b  sltiu       $v0, $t0, 0x3B
    ctx->pc = 0x153af0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x153af4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x153AF4u;
    {
        const bool branch_taken_0x153af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AF4u;
        // 0x153af8: 0x1632804  sllv        $a1, $v1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153af4) {
            ctx->pc = 0x153BD0u;
            return;
        }
    }
    ctx->pc = 0x153AFCu;
    // 0x153afc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x153afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x153b00: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x153b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x153b04: 0x2442d9f0  addiu       $v0, $v0, -0x2610
    ctx->pc = 0x153b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957552));
    // 0x153b08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x153b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153b0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x153b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153b10: 0x800008  jr          $a0
    ctx->pc = 0x153B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153B18u: goto label_153b18;
            case 0x153B38u: goto label_153b38;
            case 0x153B58u: goto label_153b58;
            case 0x153B78u: goto label_153b78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153B10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x153B18u;
label_153b18:
    // 0x153b18: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x153B18u;
    {
        const bool branch_taken_0x153b18 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B18u;
        // 0x153b1c: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b18) {
            ctx->pc = 0x153B2Cu;
            goto label_153b2c;
        }
    }
    ctx->pc = 0x153B20u;
    // 0x153b20: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x153b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x153b24: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x153b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x153b28: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x153b28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_153b2c:
    // 0x153b2c: 0xc51018  mult        $v0, $a2, $a1
    ctx->pc = 0x153b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x153b30: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x153B30u;
    {
        const bool branch_taken_0x153b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B30u;
        // 0x153b34: 0x23983  sra         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b30) {
            ctx->pc = 0x153BD0u;
            return;
        }
    }
    ctx->pc = 0x153B38u;
label_153b38:
    // 0x153b38: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x153B38u;
    {
        const bool branch_taken_0x153b38 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B38u;
        // 0x153b3c: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b38) {
            ctx->pc = 0x153B4Cu;
            goto label_153b4c;
        }
    }
    ctx->pc = 0x153B40u;
    // 0x153b40: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x153b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x153b44: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x153b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x153b48: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x153b48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_153b4c:
    // 0x153b4c: 0xc51018  mult        $v0, $a2, $a1
    ctx->pc = 0x153b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x153b50: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x153B50u;
    {
        const bool branch_taken_0x153b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B50u;
        // 0x153b54: 0x239c3  sra         $a3, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b50) {
            ctx->pc = 0x153BD0u;
            return;
        }
    }
    ctx->pc = 0x153B58u;
label_153b58:
    // 0x153b58: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x153B58u;
    {
        const bool branch_taken_0x153b58 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B58u;
        // 0x153b5c: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b58) {
            ctx->pc = 0x153B6Cu;
            goto label_153b6c;
        }
    }
    ctx->pc = 0x153B60u;
    // 0x153b60: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x153b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x153b64: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x153b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x153b68: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x153b68u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_153b6c:
    // 0x153b6c: 0xc51018  mult        $v0, $a2, $a1
    ctx->pc = 0x153b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x153b70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x153B70u;
    {
        const bool branch_taken_0x153b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B70u;
        // 0x153b74: 0x23a03  sra         $a3, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b70) {
            ctx->pc = 0x153BD0u;
            return;
        }
    }
    ctx->pc = 0x153B78u;
label_153b78:
    // 0x153b78: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x153B78u;
    {
        const bool branch_taken_0x153b78 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B78u;
        // 0x153b7c: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b78) {
            ctx->pc = 0x153B8Cu;
            goto label_153b8c;
        }
    }
    ctx->pc = 0x153B80u;
    // 0x153b80: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x153b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153b84: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x153b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x153b88: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x153b88u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_153b8c:
    // 0x153b8c: 0xc51018  mult        $v0, $a2, $a1
    ctx->pc = 0x153b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x153b90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x153B90u;
    {
        const bool branch_taken_0x153b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B90u;
        // 0x153b94: 0x23a43  sra         $a3, $v0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b90) {
            ctx->pc = 0x153BD0u;
            return;
        }
    }
    ctx->pc = 0x153B98u;
label_153b98:
    // 0x153b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153b9c: 0x15020008  bne         $t0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x153B9Cu;
    {
        const bool branch_taken_0x153b9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x153BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B9Cu;
        // 0x153ba0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b9c) {
            ctx->pc = 0x153BC0u;
            goto label_153bc0;
        }
    }
    ctx->pc = 0x153BA4u;
    // 0x153ba4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x153ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x153ba8: 0x122001a  div         $zero, $t1, $v0
    ctx->pc = 0x153ba8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x153bac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x153BACu;
    {
        const bool branch_taken_0x153bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153bac) {
            ctx->pc = 0x153BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153BACu;
            // 0x153bb0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x153BB4u;
            goto label_153bb4;
        }
    }
    ctx->pc = 0x153BB4u;
label_153bb4:
    // 0x153bb4: 0x1812  mflo        $v1
    ctx->pc = 0x153bb4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x153bb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x153BB8u;
    {
        const bool branch_taken_0x153bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BB8u;
        // 0x153bbc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bb8) {
            ctx->pc = 0x153BD0u;
            return;
        }
    }
    ctx->pc = 0x153BC0u;
label_153bc0:
    // 0x153bc0: 0x2523000f  addiu       $v1, $t1, 0xF
    ctx->pc = 0x153bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x153bc4: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x153bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x153bc8: 0x122180b  movn        $v1, $t1, $v0
    ctx->pc = 0x153bc8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x153bcc: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x153bccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x153bd0u;
}
