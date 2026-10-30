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

// Function: sub_004BC158
// Address: 0x4bc158 - 0x4bc3a8
void sub_004BC158_0x4bc158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BC158_0x4bc158");
#endif

    switch (ctx->pc) {
        case 0x4bc1e4u: goto label_4bc1e4;
        case 0x4bc220u: goto label_4bc220;
        case 0x4bc270u: goto label_4bc270;
        case 0x4bc300u: goto label_4bc300;
        case 0x4bc350u: goto label_4bc350;
        default: break;
    }

    ctx->pc = 0x4bc158u;

    // 0x4bc158: 0x44076800  mfc1        $a3, $f13
    ctx->pc = 0x4bc158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x4bc15c: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x4bc15cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4bc160: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4bc160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc164: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4bc164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc168: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4bc168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x4bc16c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4bc16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4bc170: 0xa34824  and         $t1, $a1, $v1
    ctx->pc = 0x4bc170u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4bc174: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc178: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4bc178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bc17c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4BC17Cu;
    {
        const bool branch_taken_0x4bc17c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC17Cu;
        // 0x4bc180: 0xa92826  xor         $a1, $a1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc17c) {
            ctx->pc = 0x4BC1A8u;
            goto label_4bc1a8;
        }
    }
    ctx->pc = 0x4BC184u;
    // 0x4bc184: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x4bc184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x4bc188: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc18c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4bc18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4bc190: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BC190u;
    {
        const bool branch_taken_0x4bc190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC190u;
        // 0x4bc194: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc190) {
            ctx->pc = 0x4BC1A8u;
            goto label_4bc1a8;
        }
    }
    ctx->pc = 0x4BC198u;
    // 0x4bc198: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x4bc198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4bc19c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4BC19Cu;
    {
        const bool branch_taken_0x4bc19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC19Cu;
        // 0x4bc1a0: 0xa6102a  slt         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc19c) {
            ctx->pc = 0x4BC1C8u;
            goto label_4bc1c8;
        }
    }
    ctx->pc = 0x4BC1A4u;
    // 0x4bc1a4: 0x0  nop
    ctx->pc = 0x4bc1a4u;
    // NOP
label_4bc1a8:
    // 0x4bc1a8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4bc1a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc1ac: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x4bc1acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bc1b0: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x4bc1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4bc1b4: 0x0  nop
    ctx->pc = 0x4bc1b4u;
    // NOP
    // 0x4bc1b8: 0x0  nop
    ctx->pc = 0x4bc1b8u;
    // NOP
    // 0x4bc1bc: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x4bc1bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x4bc1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC1C8u;
label_4bc1c8:
    // 0x4bc1c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BC1C8u;
    {
        const bool branch_taken_0x4bc1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc1c8) {
            ctx->pc = 0x4BC1DCu;
            goto label_4bc1dc;
        }
    }
    ctx->pc = 0x4BC1D0u;
    // 0x4bc1d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4bc1d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC1DCu;
label_4bc1dc:
    // 0x4bc1dc: 0x14a60008  bne         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BC1DCu;
    {
        const bool branch_taken_0x4bc1dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x4BC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC1DCu;
        // 0x4bc1e0: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc1dc) {
            ctx->pc = 0x4BC200u;
            goto label_4bc200;
        }
    }
    ctx->pc = 0x4BC1E4u;
label_4bc1e4:
    // 0x4bc1e4: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x4bc1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x4bc1e8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4bc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4bc1ec: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x4bc1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
    // 0x4bc1f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bc1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4bc1f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bc1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bc1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC1F8u;
        // 0x4bc1fc: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC200u;
label_4bc200:
    // 0x4bc200: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc204: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4bc204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4bc208: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4BC208u;
    {
        const bool branch_taken_0x4bc208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC208u;
        // 0x4bc20c: 0x515c3  sra         $v0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc208) {
            ctx->pc = 0x4BC244u;
            goto label_4bc244;
        }
    }
    ctx->pc = 0x4BC210u;
    // 0x4bc210: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x4bc210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x4bc214: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BC214u;
    {
        const bool branch_taken_0x4bc214 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4BC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC214u;
        // 0x4bc218: 0x2408ff82  addiu       $t0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc214) {
            ctx->pc = 0x4BC248u;
            goto label_4bc248;
        }
    }
    ctx->pc = 0x4BC21Cu;
    // 0x4bc21c: 0x0  nop
    ctx->pc = 0x4bc21cu;
    // NOP
label_4bc220:
    // 0x4bc220: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4bc220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4bc224: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4bc224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4bc228: 0x0  nop
    ctx->pc = 0x4bc228u;
    // NOP
    // 0x4bc22c: 0x0  nop
    ctx->pc = 0x4bc22cu;
    // NOP
    // 0x4bc230: 0x0  nop
    ctx->pc = 0x4bc230u;
    // NOP
    // 0x4bc234: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BC234u;
    {
        const bool branch_taken_0x4bc234 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4bc234) {
            ctx->pc = 0x4BC220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bc220;
        }
    }
    ctx->pc = 0x4BC23Cu;
    // 0x4bc23c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC23Cu;
    {
        const bool branch_taken_0x4bc23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC23Cu;
        // 0x4bc240: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc23c) {
            ctx->pc = 0x4BC24Cu;
            goto label_4bc24c;
        }
    }
    ctx->pc = 0x4BC244u;
label_4bc244:
    // 0x4bc244: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x4bc244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
label_4bc248:
    // 0x4bc248: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bc248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4bc24c:
    // 0x4bc24c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc250: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x4bc250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4bc254: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4BC254u;
    {
        const bool branch_taken_0x4bc254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC254u;
        // 0x4bc258: 0x615c3  sra         $v0, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc254) {
            ctx->pc = 0x4BC294u;
            goto label_4bc294;
        }
    }
    ctx->pc = 0x4BC25Cu;
    // 0x4bc25c: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x4bc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x4bc260: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4BC260u;
    {
        const bool branch_taken_0x4bc260 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC260u;
        // 0x4bc264: 0x2407ff82  addiu       $a3, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc260) {
            ctx->pc = 0x4BC2A0u;
            goto label_4bc2a0;
        }
    }
    ctx->pc = 0x4BC268u;
    // 0x4bc268: 0x2904ff82  slti        $a0, $t0, -0x7E
    ctx->pc = 0x4bc268u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x4bc26c: 0x0  nop
    ctx->pc = 0x4bc26cu;
    // NOP
label_4bc270:
    // 0x4bc270: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4bc270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4bc274: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4bc274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4bc278: 0x0  nop
    ctx->pc = 0x4bc278u;
    // NOP
    // 0x4bc27c: 0x0  nop
    ctx->pc = 0x4bc27cu;
    // NOP
    // 0x4bc280: 0x0  nop
    ctx->pc = 0x4bc280u;
    // NOP
    // 0x4bc284: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BC284u;
    {
        const bool branch_taken_0x4bc284 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4bc284) {
            ctx->pc = 0x4BC270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bc270;
        }
    }
    ctx->pc = 0x4BC28Cu;
    // 0x4bc28c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4BC28Cu;
    {
        const bool branch_taken_0x4bc28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc28c) {
            ctx->pc = 0x4BC2A4u;
            goto label_4bc2a4;
        }
    }
    ctx->pc = 0x4BC294u;
label_4bc294:
    // 0x4bc294: 0x2904ff82  slti        $a0, $t0, -0x7E
    ctx->pc = 0x4bc294u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x4bc298: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BC298u;
    {
        const bool branch_taken_0x4bc298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC298u;
        // 0x4bc29c: 0x2447ff81  addiu       $a3, $v0, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc298) {
            ctx->pc = 0x4BC2A4u;
            goto label_4bc2a4;
        }
    }
    ctx->pc = 0x4BC2A0u;
label_4bc2a0:
    // 0x4bc2a0: 0x2904ff82  slti        $a0, $t0, -0x7E
    ctx->pc = 0x4bc2a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_4bc2a4:
    // 0x4bc2a4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BC2A4u;
    {
        const bool branch_taken_0x4bc2a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC2A4u;
        // 0x4bc2a8: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc2a4) {
            ctx->pc = 0x4BC2C4u;
            goto label_4bc2c4;
        }
    }
    ctx->pc = 0x4BC2ACu;
    // 0x4bc2ac: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bc2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bc2b0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x4bc2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x4bc2b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc2b8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4bc2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bc2bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC2BCu;
    {
        const bool branch_taken_0x4bc2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC2BCu;
        // 0x4bc2c0: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc2bc) {
            ctx->pc = 0x4BC2CCu;
            goto label_4bc2cc;
        }
    }
    ctx->pc = 0x4BC2C4u;
label_4bc2c4:
    // 0x4bc2c4: 0x482023  subu        $a0, $v0, $t0
    ctx->pc = 0x4bc2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4bc2c8: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x4bc2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_4bc2cc:
    // 0x4bc2cc: 0x28eaff82  slti        $t2, $a3, -0x7E
    ctx->pc = 0x4bc2ccu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x4bc2d0: 0x15400007  bnez        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BC2D0u;
    {
        const bool branch_taken_0x4bc2d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC2D0u;
        // 0x4bc2d4: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc2d0) {
            ctx->pc = 0x4BC2F0u;
            goto label_4bc2f0;
        }
    }
    ctx->pc = 0x4BC2D8u;
    // 0x4bc2d8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4bc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4bc2dc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x4bc2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x4bc2e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc2e4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4bc2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bc2e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC2E8u;
    {
        const bool branch_taken_0x4bc2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC2E8u;
        // 0x4bc2ec: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc2e8) {
            ctx->pc = 0x4BC2F8u;
            goto label_4bc2f8;
        }
    }
    ctx->pc = 0x4BC2F0u;
label_4bc2f0:
    // 0x4bc2f0: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x4bc2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4bc2f4: 0x863004  sllv        $a2, $a2, $a0
    ctx->pc = 0x4bc2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_4bc2f8:
    // 0x4bc2f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4BC2F8u;
    {
        const bool branch_taken_0x4bc2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC2F8u;
        // 0x4bc2fc: 0x1072023  subu        $a0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc2f8) {
            ctx->pc = 0x4BC314u;
            goto label_4bc314;
        }
    }
    ctx->pc = 0x4BC300u;
label_4bc300:
    // 0x4bc300: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x4bc300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4bc304: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC304u;
    {
        const bool branch_taken_0x4bc304 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4BC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC304u;
        // 0x4bc308: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc304) {
            ctx->pc = 0x4BC314u;
            goto label_4bc314;
        }
    }
    ctx->pc = 0x4BC30Cu;
    // 0x4bc30c: 0x1060ffb5  beqz        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x4BC30Cu;
    {
        const bool branch_taken_0x4bc30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC30Cu;
        // 0x4bc310: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc30c) {
            ctx->pc = 0x4BC1E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bc1e4;
        }
    }
    ctx->pc = 0x4BC314u;
label_4bc314:
    // 0x4bc314: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4bc314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc318: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4BC318u;
    {
        const bool branch_taken_0x4bc318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC318u;
        // 0x4bc31c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc318) {
            ctx->pc = 0x4BC300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bc300;
        }
    }
    ctx->pc = 0x4BC320u;
    // 0x4bc320: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x4bc320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4bc324: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x4bc324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4bc328: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x4bc328u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x4bc32c: 0x10a0ffad  beqz        $a1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x4BC32Cu;
    {
        const bool branch_taken_0x4bc32c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC32Cu;
        // 0x4bc330: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc32c) {
            ctx->pc = 0x4BC1E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bc1e4;
        }
    }
    ctx->pc = 0x4BC334u;
    // 0x4bc334: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc338: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4bc338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4bc33c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BC33Cu;
    {
        const bool branch_taken_0x4bc33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bc33c) {
            ctx->pc = 0x4BC370u;
            goto label_4bc370;
        }
    }
    ctx->pc = 0x4BC344u;
    // 0x4bc344: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bc344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bc348: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc34c: 0x0  nop
    ctx->pc = 0x4bc34cu;
    // NOP
label_4bc350:
    // 0x4bc350: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4bc350u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4bc354: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4bc354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4bc358: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x4bc358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4bc35c: 0x0  nop
    ctx->pc = 0x4bc35cu;
    // NOP
    // 0x4bc360: 0x0  nop
    ctx->pc = 0x4bc360u;
    // NOP
    // 0x4bc364: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BC364u;
    {
        const bool branch_taken_0x4bc364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc364) {
            ctx->pc = 0x4BC350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bc350;
        }
    }
    ctx->pc = 0x4BC36Cu;
    // 0x4bc36c: 0x28eaff82  slti        $t2, $a3, -0x7E
    ctx->pc = 0x4bc36cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_4bc370:
    // 0x4bc370: 0x15400007  bnez        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BC370u;
    {
        const bool branch_taken_0x4bc370 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC370u;
        // 0x4bc374: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc370) {
            ctx->pc = 0x4BC390u;
            goto label_4bc390;
        }
    }
    ctx->pc = 0x4BC378u;
    // 0x4bc378: 0x24e3007f  addiu       $v1, $a3, 0x7F
    ctx->pc = 0x4bc378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x4bc37c: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x4bc37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x4bc380: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4bc380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4bc384: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x4bc384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x4bc388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC388u;
    {
        const bool branch_taken_0x4bc388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC388u;
        // 0x4bc38c: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc388) {
            ctx->pc = 0x4BC398u;
            goto label_4bc398;
        }
    }
    ctx->pc = 0x4BC390u;
label_4bc390:
    // 0x4bc390: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x4bc390u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4bc394: 0x852807  srav        $a1, $a1, $a0
    ctx->pc = 0x4bc394u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_4bc398:
    // 0x4bc398: 0xa92025  or          $a0, $a1, $t1
    ctx->pc = 0x4bc398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4bc39c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4bc39cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC3A8u;
}
