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

// Function: sub_003FEAD0
// Address: 0x3fead0 - 0x3fee48
void sub_003FEAD0_0x3fead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FEAD0_0x3fead0");
#endif

    switch (ctx->pc) {
        case 0x3fead0u: goto label_3fead0;
        case 0x3fead4u: goto label_3fead4;
        case 0x3fead8u: goto label_3fead8;
        case 0x3feadcu: goto label_3feadc;
        case 0x3feae0u: goto label_3feae0;
        case 0x3feae4u: goto label_3feae4;
        case 0x3feae8u: goto label_3feae8;
        case 0x3feaecu: goto label_3feaec;
        case 0x3feaf0u: goto label_3feaf0;
        case 0x3feaf4u: goto label_3feaf4;
        case 0x3feaf8u: goto label_3feaf8;
        case 0x3feafcu: goto label_3feafc;
        case 0x3feb00u: goto label_3feb00;
        case 0x3feb04u: goto label_3feb04;
        case 0x3feb08u: goto label_3feb08;
        case 0x3feb0cu: goto label_3feb0c;
        case 0x3feb10u: goto label_3feb10;
        case 0x3feb14u: goto label_3feb14;
        case 0x3feb18u: goto label_3feb18;
        case 0x3feb1cu: goto label_3feb1c;
        case 0x3feb20u: goto label_3feb20;
        case 0x3feb24u: goto label_3feb24;
        case 0x3feb28u: goto label_3feb28;
        case 0x3feb2cu: goto label_3feb2c;
        case 0x3feb30u: goto label_3feb30;
        case 0x3feb34u: goto label_3feb34;
        case 0x3feb38u: goto label_3feb38;
        case 0x3feb3cu: goto label_3feb3c;
        case 0x3feb40u: goto label_3feb40;
        case 0x3feb44u: goto label_3feb44;
        case 0x3feb48u: goto label_3feb48;
        case 0x3feb4cu: goto label_3feb4c;
        case 0x3feb50u: goto label_3feb50;
        case 0x3feb54u: goto label_3feb54;
        case 0x3feb58u: goto label_3feb58;
        case 0x3feb5cu: goto label_3feb5c;
        case 0x3feb60u: goto label_3feb60;
        case 0x3feb64u: goto label_3feb64;
        case 0x3feb68u: goto label_3feb68;
        case 0x3feb6cu: goto label_3feb6c;
        case 0x3feb70u: goto label_3feb70;
        case 0x3feb74u: goto label_3feb74;
        case 0x3feb78u: goto label_3feb78;
        case 0x3feb7cu: goto label_3feb7c;
        case 0x3feb80u: goto label_3feb80;
        case 0x3feb84u: goto label_3feb84;
        case 0x3feb88u: goto label_3feb88;
        case 0x3feb8cu: goto label_3feb8c;
        case 0x3feb90u: goto label_3feb90;
        case 0x3feb94u: goto label_3feb94;
        case 0x3feb98u: goto label_3feb98;
        case 0x3feb9cu: goto label_3feb9c;
        case 0x3feba0u: goto label_3feba0;
        case 0x3feba4u: goto label_3feba4;
        case 0x3feba8u: goto label_3feba8;
        case 0x3febacu: goto label_3febac;
        case 0x3febb0u: goto label_3febb0;
        case 0x3febb4u: goto label_3febb4;
        case 0x3febb8u: goto label_3febb8;
        case 0x3febbcu: goto label_3febbc;
        case 0x3febc0u: goto label_3febc0;
        case 0x3febc4u: goto label_3febc4;
        case 0x3febc8u: goto label_3febc8;
        case 0x3febccu: goto label_3febcc;
        case 0x3febd0u: goto label_3febd0;
        case 0x3febd4u: goto label_3febd4;
        case 0x3febd8u: goto label_3febd8;
        case 0x3febdcu: goto label_3febdc;
        case 0x3febe0u: goto label_3febe0;
        case 0x3febe4u: goto label_3febe4;
        case 0x3febe8u: goto label_3febe8;
        case 0x3febecu: goto label_3febec;
        case 0x3febf0u: goto label_3febf0;
        case 0x3febf4u: goto label_3febf4;
        case 0x3febf8u: goto label_3febf8;
        case 0x3febfcu: goto label_3febfc;
        case 0x3fec00u: goto label_3fec00;
        case 0x3fec04u: goto label_3fec04;
        case 0x3fec08u: goto label_3fec08;
        case 0x3fec0cu: goto label_3fec0c;
        case 0x3fec10u: goto label_3fec10;
        case 0x3fec14u: goto label_3fec14;
        case 0x3fec18u: goto label_3fec18;
        case 0x3fec1cu: goto label_3fec1c;
        case 0x3fec20u: goto label_3fec20;
        case 0x3fec24u: goto label_3fec24;
        case 0x3fec28u: goto label_3fec28;
        case 0x3fec2cu: goto label_3fec2c;
        case 0x3fec30u: goto label_3fec30;
        case 0x3fec34u: goto label_3fec34;
        case 0x3fec38u: goto label_3fec38;
        case 0x3fec3cu: goto label_3fec3c;
        case 0x3fec40u: goto label_3fec40;
        case 0x3fec44u: goto label_3fec44;
        case 0x3fec48u: goto label_3fec48;
        case 0x3fec4cu: goto label_3fec4c;
        case 0x3fec50u: goto label_3fec50;
        case 0x3fec54u: goto label_3fec54;
        case 0x3fec58u: goto label_3fec58;
        case 0x3fec5cu: goto label_3fec5c;
        case 0x3fec60u: goto label_3fec60;
        case 0x3fec64u: goto label_3fec64;
        case 0x3fec68u: goto label_3fec68;
        case 0x3fec6cu: goto label_3fec6c;
        case 0x3fec70u: goto label_3fec70;
        case 0x3fec74u: goto label_3fec74;
        case 0x3fec78u: goto label_3fec78;
        case 0x3fec7cu: goto label_3fec7c;
        case 0x3fec80u: goto label_3fec80;
        case 0x3fec84u: goto label_3fec84;
        case 0x3fec88u: goto label_3fec88;
        case 0x3fec8cu: goto label_3fec8c;
        case 0x3fec90u: goto label_3fec90;
        case 0x3fec94u: goto label_3fec94;
        case 0x3fec98u: goto label_3fec98;
        case 0x3fec9cu: goto label_3fec9c;
        case 0x3feca0u: goto label_3feca0;
        case 0x3feca4u: goto label_3feca4;
        case 0x3feca8u: goto label_3feca8;
        case 0x3fecacu: goto label_3fecac;
        case 0x3fecb0u: goto label_3fecb0;
        case 0x3fecb4u: goto label_3fecb4;
        case 0x3fecb8u: goto label_3fecb8;
        case 0x3fecbcu: goto label_3fecbc;
        case 0x3fecc0u: goto label_3fecc0;
        case 0x3fecc4u: goto label_3fecc4;
        case 0x3fecc8u: goto label_3fecc8;
        case 0x3fecccu: goto label_3feccc;
        case 0x3fecd0u: goto label_3fecd0;
        case 0x3fecd4u: goto label_3fecd4;
        case 0x3fecd8u: goto label_3fecd8;
        case 0x3fecdcu: goto label_3fecdc;
        case 0x3fece0u: goto label_3fece0;
        case 0x3fece4u: goto label_3fece4;
        case 0x3fece8u: goto label_3fece8;
        case 0x3fececu: goto label_3fecec;
        case 0x3fecf0u: goto label_3fecf0;
        case 0x3fecf4u: goto label_3fecf4;
        case 0x3fecf8u: goto label_3fecf8;
        case 0x3fecfcu: goto label_3fecfc;
        case 0x3fed00u: goto label_3fed00;
        case 0x3fed04u: goto label_3fed04;
        case 0x3fed08u: goto label_3fed08;
        case 0x3fed0cu: goto label_3fed0c;
        case 0x3fed10u: goto label_3fed10;
        case 0x3fed14u: goto label_3fed14;
        case 0x3fed18u: goto label_3fed18;
        case 0x3fed1cu: goto label_3fed1c;
        case 0x3fed20u: goto label_3fed20;
        case 0x3fed24u: goto label_3fed24;
        case 0x3fed28u: goto label_3fed28;
        case 0x3fed2cu: goto label_3fed2c;
        case 0x3fed30u: goto label_3fed30;
        case 0x3fed34u: goto label_3fed34;
        case 0x3fed38u: goto label_3fed38;
        case 0x3fed3cu: goto label_3fed3c;
        case 0x3fed40u: goto label_3fed40;
        case 0x3fed44u: goto label_3fed44;
        case 0x3fed48u: goto label_3fed48;
        case 0x3fed4cu: goto label_3fed4c;
        case 0x3fed50u: goto label_3fed50;
        case 0x3fed54u: goto label_3fed54;
        case 0x3fed58u: goto label_3fed58;
        case 0x3fed5cu: goto label_3fed5c;
        case 0x3fed60u: goto label_3fed60;
        case 0x3fed64u: goto label_3fed64;
        case 0x3fed68u: goto label_3fed68;
        case 0x3fed6cu: goto label_3fed6c;
        case 0x3fed70u: goto label_3fed70;
        case 0x3fed74u: goto label_3fed74;
        case 0x3fed78u: goto label_3fed78;
        case 0x3fed7cu: goto label_3fed7c;
        case 0x3fed80u: goto label_3fed80;
        case 0x3fed84u: goto label_3fed84;
        case 0x3fed88u: goto label_3fed88;
        case 0x3fed8cu: goto label_3fed8c;
        case 0x3fed90u: goto label_3fed90;
        case 0x3fed94u: goto label_3fed94;
        case 0x3fed98u: goto label_3fed98;
        case 0x3fed9cu: goto label_3fed9c;
        case 0x3feda0u: goto label_3feda0;
        case 0x3feda4u: goto label_3feda4;
        case 0x3feda8u: goto label_3feda8;
        case 0x3fedacu: goto label_3fedac;
        case 0x3fedb0u: goto label_3fedb0;
        case 0x3fedb4u: goto label_3fedb4;
        case 0x3fedb8u: goto label_3fedb8;
        case 0x3fedbcu: goto label_3fedbc;
        case 0x3fedc0u: goto label_3fedc0;
        case 0x3fedc4u: goto label_3fedc4;
        case 0x3fedc8u: goto label_3fedc8;
        case 0x3fedccu: goto label_3fedcc;
        case 0x3fedd0u: goto label_3fedd0;
        case 0x3fedd4u: goto label_3fedd4;
        case 0x3fedd8u: goto label_3fedd8;
        case 0x3feddcu: goto label_3feddc;
        case 0x3fede0u: goto label_3fede0;
        case 0x3fede4u: goto label_3fede4;
        case 0x3fede8u: goto label_3fede8;
        case 0x3fedecu: goto label_3fedec;
        case 0x3fedf0u: goto label_3fedf0;
        case 0x3fedf4u: goto label_3fedf4;
        case 0x3fedf8u: goto label_3fedf8;
        case 0x3fedfcu: goto label_3fedfc;
        case 0x3fee00u: goto label_3fee00;
        case 0x3fee04u: goto label_3fee04;
        case 0x3fee08u: goto label_3fee08;
        case 0x3fee0cu: goto label_3fee0c;
        case 0x3fee10u: goto label_3fee10;
        case 0x3fee14u: goto label_3fee14;
        case 0x3fee18u: goto label_3fee18;
        case 0x3fee1cu: goto label_3fee1c;
        case 0x3fee20u: goto label_3fee20;
        case 0x3fee24u: goto label_3fee24;
        case 0x3fee28u: goto label_3fee28;
        case 0x3fee2cu: goto label_3fee2c;
        case 0x3fee30u: goto label_3fee30;
        case 0x3fee34u: goto label_3fee34;
        case 0x3fee38u: goto label_3fee38;
        case 0x3fee3cu: goto label_3fee3c;
        case 0x3fee40u: goto label_3fee40;
        case 0x3fee44u: goto label_3fee44;
        default: break;
    }

    ctx->pc = 0x3fead0u;

label_3fead0:
    // 0x3fead0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3fead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3fead4:
    // 0x3fead4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3fead4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3fead8:
    // 0x3fead8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3fead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3feadc:
    // 0x3feadc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3feadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3feae0:
    // 0x3feae0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3feae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3feae4:
    // 0x3feae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3feae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3feae8:
    // 0x3feae8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3feae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3feaec:
    // 0x3feaec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3feaecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3feaf0:
    // 0x3feaf0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3feaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3feaf4:
    // 0x3feaf4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3feaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3feaf8:
    // 0x3feaf8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3feaf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3feafc:
    // 0x3feafc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3feafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3feb00:
    // 0x3feb00: 0x40f809  jalr        $v0
label_3feb04:
    if (ctx->pc == 0x3FEB04u) {
        ctx->pc = 0x3FEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB00u;
        // 0x3feb04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEB08u;
        goto label_3feb08;
    }
    ctx->pc = 0x3FEB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FEB08u);
        ctx->pc = 0x3FEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB00u;
        // 0x3feb04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEB00u, 0x3FEB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FEB08u;
label_3feb08:
    // 0x3feb08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3feb08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3feb0c:
    // 0x3feb0c: 0x2e02003f  sltiu       $v0, $s0, 0x3F
    ctx->pc = 0x3feb0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
label_3feb10:
    // 0x3feb10: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
label_3feb14:
    if (ctx->pc == 0x3FEB14u) {
        ctx->pc = 0x3FEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB10u;
        // 0x3feb14: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEB18u;
        goto label_3feb18;
    }
    ctx->pc = 0x3FEB10u;
    {
        const bool branch_taken_0x3feb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB10u;
        // 0x3feb14: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feb10) {
            ctx->pc = 0x3FEE48u;
            return;
        }
    }
    ctx->pc = 0x3FEB18u;
label_3feb18:
    // 0x3feb18: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3feb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3feb1c:
    // 0x3feb1c: 0x24427520  addiu       $v0, $v0, 0x7520
    ctx->pc = 0x3feb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29984));
label_3feb20:
    // 0x3feb20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3feb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3feb24:
    // 0x3feb24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3feb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3feb28:
    // 0x3feb28: 0x800008  jr          $a0
label_3feb2c:
    if (ctx->pc == 0x3FEB2Cu) {
        ctx->pc = 0x3FEB30u;
        goto label_3feb30;
    }
    ctx->pc = 0x3FEB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3FEB30u: goto label_3feb30;
            case 0x3FEB68u: goto label_3feb68;
            case 0x3FEB80u: goto label_3feb80;
            case 0x3FEC08u: goto label_3fec08;
            case 0x3FEC20u: goto label_3fec20;
            case 0x3FEC84u: goto label_3fec84;
            case 0x3FEC94u: goto label_3fec94;
            case 0x3FECF4u: goto label_3fecf4;
            case 0x3FED00u: goto label_3fed00;
            case 0x3FED0Cu: goto label_3fed0c;
            case 0x3FED24u: goto label_3fed24;
            case 0x3FED3Cu: goto label_3fed3c;
            case 0x3FED80u: goto label_3fed80;
            case 0x3FEDD0u: goto label_3fedd0;
            case 0x3FEE04u: goto label_3fee04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEB28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3FEB30u;
label_3feb30:
    // 0x3feb30: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3feb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3feb34:
    // 0x3feb34: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x3feb34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_3feb38:
    // 0x3feb38: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3feb38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3feb3c:
    // 0x3feb3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3feb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3feb40:
    // 0x3feb40: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x3feb40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_3feb44:
    // 0x3feb44: 0xc0e858c  jal         func_3A1630
label_3feb48:
    if (ctx->pc == 0x3FEB48u) {
        ctx->pc = 0x3FEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB44u;
        // 0x3feb48: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEB4Cu;
        goto label_3feb4c;
    }
    ctx->pc = 0x3FEB44u;
    SET_GPR_U32(ctx, 31, 0x3FEB4Cu);
    ctx->pc = 0x3FEB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEB44u;
    // 0x3feb48: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FEB44u, 0x3FEB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEB4Cu;
label_3feb4c:
    // 0x3feb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3feb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3feb50:
    // 0x3feb50: 0xc0e862e  jal         func_3A18B8
label_3feb54:
    if (ctx->pc == 0x3FEB54u) {
        ctx->pc = 0x3FEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB50u;
        // 0x3feb54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEB58u;
        goto label_3feb58;
    }
    ctx->pc = 0x3FEB50u;
    SET_GPR_U32(ctx, 31, 0x3FEB58u);
    ctx->pc = 0x3FEB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEB50u;
    // 0x3feb54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3FEB50u, 0x3FEB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEB58u;
label_3feb58:
    // 0x3feb58: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x3feb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_3feb5c:
    // 0x3feb5c: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x3feb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_3feb60:
    // 0x3feb60: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_3feb64:
    if (ctx->pc == 0x3FEB64u) {
        ctx->pc = 0x3FEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB60u;
        // 0x3feb64: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEB68u;
        goto label_3feb68;
    }
    ctx->pc = 0x3FEB60u;
    {
        const bool branch_taken_0x3feb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB60u;
        // 0x3feb64: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feb60) {
            ctx->pc = 0x3FEE48u;
            return;
        }
    }
    ctx->pc = 0x3FEB68u;
label_3feb68:
    // 0x3feb68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3feb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3feb6c:
    // 0x3feb6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3feb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3feb70:
    // 0x3feb70: 0xc0ff580  jal         func_3FD600
label_3feb74:
    if (ctx->pc == 0x3FEB74u) {
        ctx->pc = 0x3FEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB70u;
        // 0x3feb74: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEB78u;
        goto label_3feb78;
    }
    ctx->pc = 0x3FEB70u;
    SET_GPR_U32(ctx, 31, 0x3FEB78u);
    ctx->pc = 0x3FEB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEB70u;
    // 0x3feb74: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD600u, 0x3FEB70u, 0x3FEB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEB78u;
label_3feb78:
    // 0x3feb78: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_3feb7c:
    if (ctx->pc == 0x3FEB7Cu) {
        ctx->pc = 0x3FEB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB78u;
        // 0x3feb7c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEB80u;
        goto label_3feb80;
    }
    ctx->pc = 0x3FEB78u;
    {
        const bool branch_taken_0x3feb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB78u;
        // 0x3feb7c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feb78) {
            ctx->pc = 0x3FEE4Cu;
            return;
        }
    }
    ctx->pc = 0x3FEB80u;
label_3feb80:
    // 0x3feb80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3feb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3feb84:
    // 0x3feb84: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3feb84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3feb88:
    // 0x3feb88: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3feb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3feb8c:
    // 0x3feb8c: 0x40f809  jalr        $v0
label_3feb90:
    if (ctx->pc == 0x3FEB90u) {
        ctx->pc = 0x3FEB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB8Cu;
        // 0x3feb90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEB94u;
        goto label_3feb94;
    }
    ctx->pc = 0x3FEB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FEB94u);
        ctx->pc = 0x3FEB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB8Cu;
        // 0x3feb90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEB8Cu, 0x3FEB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FEB94u;
label_3feb94:
    // 0x3feb94: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3feb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_3feb98:
    // 0x3feb98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3feb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3feb9c:
    // 0x3feb9c: 0x144000ab  bnez        $v0, . + 4 + (0xAB << 2)
label_3feba0:
    if (ctx->pc == 0x3FEBA0u) {
        ctx->pc = 0x3FEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB9Cu;
        // 0x3feba0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEBA4u;
        goto label_3feba4;
    }
    ctx->pc = 0x3FEB9Cu;
    {
        const bool branch_taken_0x3feb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEB9Cu;
        // 0x3feba0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feb9c) {
            ctx->pc = 0x3FEE4Cu;
            return;
        }
    }
    ctx->pc = 0x3FEBA4u;
label_3feba4:
    // 0x3feba4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3feba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3feba8:
    // 0x3feba8: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3feba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_3febac:
    // 0x3febac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3febacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3febb0:
    // 0x3febb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3febb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3febb4:
    // 0x3febb4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3febb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3febb8:
    // 0x3febb8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x3febb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3febbc:
    // 0x3febbc: 0x546000a4  bnel        $v1, $zero, . + 4 + (0xA4 << 2)
label_3febc0:
    if (ctx->pc == 0x3FEBC0u) {
        ctx->pc = 0x3FEBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEBBCu;
        // 0x3febc0: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEBC4u;
        goto label_3febc4;
    }
    ctx->pc = 0x3FEBBCu;
    {
        const bool branch_taken_0x3febbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3febbc) {
            ctx->pc = 0x3FEBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FEBBCu;
            // 0x3febc0: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FEE50u;
            return;
        }
    }
    ctx->pc = 0x3FEBC4u;
label_3febc4:
    // 0x3febc4: 0xc0ea14c  jal         func_3A8530
label_3febc8:
    if (ctx->pc == 0x3FEBC8u) {
        ctx->pc = 0x3FEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEBC4u;
        // 0x3febc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEBCCu;
        goto label_3febcc;
    }
    ctx->pc = 0x3FEBC4u;
    SET_GPR_U32(ctx, 31, 0x3FEBCCu);
    ctx->pc = 0x3FEBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEBC4u;
    // 0x3febc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FEBC4u, 0x3FEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEBCCu;
label_3febcc:
    // 0x3febcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3febccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3febd0:
    // 0x3febd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3febd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3febd4:
    // 0x3febd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3febd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3febd8:
    // 0x3febd8: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x3febd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
label_3febdc:
    // 0x3febdc: 0xc0ea176  jal         func_3A85D8
label_3febe0:
    if (ctx->pc == 0x3FEBE0u) {
        ctx->pc = 0x3FEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEBDCu;
        // 0x3febe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEBE4u;
        goto label_3febe4;
    }
    ctx->pc = 0x3FEBDCu;
    SET_GPR_U32(ctx, 31, 0x3FEBE4u);
    ctx->pc = 0x3FEBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEBDCu;
    // 0x3febe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3FEBDCu, 0x3FEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEBE4u;
label_3febe4:
    // 0x3febe4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3febe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3febe8:
    // 0x3febe8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3febe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3febec:
    // 0x3febec: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3febecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3febf0:
    // 0x3febf0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3febf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3febf4:
    // 0x3febf4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3febf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3febf8:
    // 0x3febf8: 0x40f809  jalr        $v0
label_3febfc:
    if (ctx->pc == 0x3FEBFCu) {
        ctx->pc = 0x3FEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEBF8u;
        // 0x3febfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC00u;
        goto label_3fec00;
    }
    ctx->pc = 0x3FEBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FEC00u);
        ctx->pc = 0x3FEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEBF8u;
        // 0x3febfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEBF8u, 0x3FEC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FEC00u;
label_3fec00:
    // 0x3fec00: 0x10000092  b           . + 4 + (0x92 << 2)
label_3fec04:
    if (ctx->pc == 0x3FEC04u) {
        ctx->pc = 0x3FEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC00u;
        // 0x3fec04: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC08u;
        goto label_3fec08;
    }
    ctx->pc = 0x3FEC00u;
    {
        const bool branch_taken_0x3fec00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC00u;
        // 0x3fec04: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fec00) {
            ctx->pc = 0x3FEE4Cu;
            return;
        }
    }
    ctx->pc = 0x3FEC08u;
label_3fec08:
    // 0x3fec08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fec08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fec0c:
    // 0x3fec0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fec0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fec10:
    // 0x3fec10: 0xc0ff924  jal         func_3FE490
label_3fec14:
    if (ctx->pc == 0x3FEC14u) {
        ctx->pc = 0x3FEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC10u;
        // 0x3fec14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC18u;
        goto label_3fec18;
    }
    ctx->pc = 0x3FEC10u;
    SET_GPR_U32(ctx, 31, 0x3FEC18u);
    ctx->pc = 0x3FEC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEC10u;
    // 0x3fec14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FE490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FE490u, 0x3FEC10u, 0x3FEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEC18u;
label_3fec18:
    // 0x3fec18: 0x1000008c  b           . + 4 + (0x8C << 2)
label_3fec1c:
    if (ctx->pc == 0x3FEC1Cu) {
        ctx->pc = 0x3FEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC18u;
        // 0x3fec1c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC20u;
        goto label_3fec20;
    }
    ctx->pc = 0x3FEC18u;
    {
        const bool branch_taken_0x3fec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC18u;
        // 0x3fec1c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fec18) {
            ctx->pc = 0x3FEE4Cu;
            return;
        }
    }
    ctx->pc = 0x3FEC20u;
label_3fec20:
    // 0x3fec20: 0xc0ea146  jal         func_3A8518
label_3fec24:
    if (ctx->pc == 0x3FEC24u) {
        ctx->pc = 0x3FEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC20u;
        // 0x3fec24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC28u;
        goto label_3fec28;
    }
    ctx->pc = 0x3FEC20u;
    SET_GPR_U32(ctx, 31, 0x3FEC28u);
    ctx->pc = 0x3FEC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEC20u;
    // 0x3fec24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FEC20u, 0x3FEC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEC28u;
label_3fec28:
    // 0x3fec28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fec2c:
    // 0x3fec2c: 0xc0ea12a  jal         func_3A84A8
label_3fec30:
    if (ctx->pc == 0x3FEC30u) {
        ctx->pc = 0x3FEC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC2Cu;
        // 0x3fec30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC34u;
        goto label_3fec34;
    }
    ctx->pc = 0x3FEC2Cu;
    SET_GPR_U32(ctx, 31, 0x3FEC34u);
    ctx->pc = 0x3FEC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEC2Cu;
    // 0x3fec30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FEC2Cu, 0x3FEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEC34u;
label_3fec34:
    // 0x3fec34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3fec34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3fec38:
    // 0x3fec38: 0xc0ea12a  jal         func_3A84A8
label_3fec3c:
    if (ctx->pc == 0x3FEC3Cu) {
        ctx->pc = 0x3FEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC38u;
        // 0x3fec3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC40u;
        goto label_3fec40;
    }
    ctx->pc = 0x3FEC38u;
    SET_GPR_U32(ctx, 31, 0x3FEC40u);
    ctx->pc = 0x3FEC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEC38u;
    // 0x3fec3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FEC38u, 0x3FEC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEC40u;
label_3fec40:
    // 0x3fec40: 0xc0ea146  jal         func_3A8518
label_3fec44:
    if (ctx->pc == 0x3FEC44u) {
        ctx->pc = 0x3FEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC40u;
        // 0x3fec44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC48u;
        goto label_3fec48;
    }
    ctx->pc = 0x3FEC40u;
    SET_GPR_U32(ctx, 31, 0x3FEC48u);
    ctx->pc = 0x3FEC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEC40u;
    // 0x3fec44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FEC40u, 0x3FEC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEC48u;
label_3fec48:
    // 0x3fec48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fec48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fec4c:
    // 0x3fec4c: 0xc0ea14c  jal         func_3A8530
label_3fec50:
    if (ctx->pc == 0x3FEC50u) {
        ctx->pc = 0x3FEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC4Cu;
        // 0x3fec50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC54u;
        goto label_3fec54;
    }
    ctx->pc = 0x3FEC4Cu;
    SET_GPR_U32(ctx, 31, 0x3FEC54u);
    ctx->pc = 0x3FEC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEC4Cu;
    // 0x3fec50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FEC4Cu, 0x3FEC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEC54u;
label_3fec54:
    // 0x3fec54: 0xc0e896e  jal         func_3A25B8
label_3fec58:
    if (ctx->pc == 0x3FEC58u) {
        ctx->pc = 0x3FEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC54u;
        // 0x3fec58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC5Cu;
        goto label_3fec5c;
    }
    ctx->pc = 0x3FEC54u;
    SET_GPR_U32(ctx, 31, 0x3FEC5Cu);
    ctx->pc = 0x3FEC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEC54u;
    // 0x3fec58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3FEC54u, 0x3FEC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEC5Cu;
label_3fec5c:
    // 0x3fec5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3fec5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fec60:
    // 0x3fec60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3fec60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fec64:
    // 0x3fec64: 0xc0e8604  jal         func_3A1810
label_3fec68:
    if (ctx->pc == 0x3FEC68u) {
        ctx->pc = 0x3FEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC64u;
        // 0x3fec68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC6Cu;
        goto label_3fec6c;
    }
    ctx->pc = 0x3FEC64u;
    SET_GPR_U32(ctx, 31, 0x3FEC6Cu);
    ctx->pc = 0x3FEC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEC64u;
    // 0x3fec68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3FEC64u, 0x3FEC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEC6Cu;
label_3fec6c:
    // 0x3fec6c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3fec6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fec70:
    // 0x3fec70: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x3fec70u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
label_3fec74:
    // 0x3fec74: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3fec74u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3fec78:
    // 0x3fec78: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3fec78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fec7c:
    // 0x3fec7c: 0x10000072  b           . + 4 + (0x72 << 2)
label_3fec80:
    if (ctx->pc == 0x3FEC80u) {
        ctx->pc = 0x3FEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC7Cu;
        // 0x3fec80: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC84u;
        goto label_3fec84;
    }
    ctx->pc = 0x3FEC7Cu;
    {
        const bool branch_taken_0x3fec7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC7Cu;
        // 0x3fec80: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fec7c) {
            ctx->pc = 0x3FEE48u;
            return;
        }
    }
    ctx->pc = 0x3FEC84u;
label_3fec84:
    // 0x3fec84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3fec84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3fec88:
    // 0x3fec88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fec8c:
    // 0x3fec8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3fec90:
    if (ctx->pc == 0x3FEC90u) {
        ctx->pc = 0x3FEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC8Cu;
        // 0x3fec90: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEC94u;
        goto label_3fec94;
    }
    ctx->pc = 0x3FEC8Cu;
    {
        const bool branch_taken_0x3fec8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEC8Cu;
        // 0x3fec90: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fec8c) {
            ctx->pc = 0x3FECA0u;
            goto label_3feca0;
        }
    }
    ctx->pc = 0x3FEC94u;
label_3fec94:
    // 0x3fec94: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3fec94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3fec98:
    // 0x3fec98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fec98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fec9c:
    // 0x3fec9c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3fec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3feca0:
    // 0x3feca0: 0xc0e8e26  jal         func_3A3898
label_3feca4:
    if (ctx->pc == 0x3FECA4u) {
        ctx->pc = 0x3FECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FECA0u;
        // 0x3feca4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FECA8u;
        goto label_3feca8;
    }
    ctx->pc = 0x3FECA0u;
    SET_GPR_U32(ctx, 31, 0x3FECA8u);
    ctx->pc = 0x3FECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FECA0u;
    // 0x3feca4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3FECA0u, 0x3FECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FECA8u;
label_3feca8:
    // 0x3feca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3feca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fecac:
    // 0x3fecac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fecacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fecb0:
    // 0x3fecb0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3fecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fecb4:
    // 0x3fecb4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3fecb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fecb8:
    // 0x3fecb8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3fecb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3fecbc:
    // 0x3fecbc: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3fecbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3fecc0:
    // 0x3fecc0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3fecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3fecc4:
    // 0x3fecc4: 0xc136b30  jal         func_4DACC0
label_3fecc8:
    if (ctx->pc == 0x3FECC8u) {
        ctx->pc = 0x3FECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FECC4u;
        // 0x3fecc8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FECCCu;
        goto label_3feccc;
    }
    ctx->pc = 0x3FECC4u;
    SET_GPR_U32(ctx, 31, 0x3FECCCu);
    ctx->pc = 0x3FECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FECC4u;
    // 0x3fecc8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3FECC4u, 0x3FECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FECCCu;
label_3feccc:
    // 0x3feccc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3fecccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fecd0:
    // 0x3fecd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fecd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fecd4:
    // 0x3fecd4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3fecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3fecd8:
    // 0x3fecd8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3fecd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fecdc:
    // 0x3fecdc: 0xc136b18  jal         func_4DAC60
label_3fece0:
    if (ctx->pc == 0x3FECE0u) {
        ctx->pc = 0x3FECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FECDCu;
        // 0x3fece0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FECE4u;
        goto label_3fece4;
    }
    ctx->pc = 0x3FECDCu;
    SET_GPR_U32(ctx, 31, 0x3FECE4u);
    ctx->pc = 0x3FECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FECDCu;
    // 0x3fece0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3FECDCu, 0x3FECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FECE4u;
label_3fece4:
    // 0x3fece4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3fece4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fece8:
    // 0x3fece8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3fece8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3fecec:
    // 0x3fecec: 0x10000056  b           . + 4 + (0x56 << 2)
label_3fecf0:
    if (ctx->pc == 0x3FECF0u) {
        ctx->pc = 0x3FECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FECECu;
        // 0x3fecf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FECF4u;
        goto label_3fecf4;
    }
    ctx->pc = 0x3FECECu;
    {
        const bool branch_taken_0x3fecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FECECu;
        // 0x3fecf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fecec) {
            ctx->pc = 0x3FEE48u;
            return;
        }
    }
    ctx->pc = 0x3FECF4u;
label_3fecf4:
    // 0x3fecf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fecf8:
    // 0x3fecf8: 0x10000053  b           . + 4 + (0x53 << 2)
label_3fecfc:
    if (ctx->pc == 0x3FECFCu) {
        ctx->pc = 0x3FECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FECF8u;
        // 0x3fecfc: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED00u;
        goto label_3fed00;
    }
    ctx->pc = 0x3FECF8u;
    {
        const bool branch_taken_0x3fecf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FECF8u;
        // 0x3fecfc: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fecf8) {
            ctx->pc = 0x3FEE48u;
            return;
        }
    }
    ctx->pc = 0x3FED00u;
label_3fed00:
    // 0x3fed00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3fed00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fed04:
    // 0x3fed04: 0x10000050  b           . + 4 + (0x50 << 2)
label_3fed08:
    if (ctx->pc == 0x3FED08u) {
        ctx->pc = 0x3FED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED04u;
        // 0x3fed08: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED0Cu;
        goto label_3fed0c;
    }
    ctx->pc = 0x3FED04u;
    {
        const bool branch_taken_0x3fed04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED04u;
        // 0x3fed08: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed04) {
            ctx->pc = 0x3FEE48u;
            return;
        }
    }
    ctx->pc = 0x3FED0Cu;
label_3fed0c:
    // 0x3fed0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fed10:
    // 0x3fed10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fed10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fed14:
    // 0x3fed14: 0xc0ff9ae  jal         func_3FE6B8
label_3fed18:
    if (ctx->pc == 0x3FED18u) {
        ctx->pc = 0x3FED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED14u;
        // 0x3fed18: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED1Cu;
        goto label_3fed1c;
    }
    ctx->pc = 0x3FED14u;
    SET_GPR_U32(ctx, 31, 0x3FED1Cu);
    ctx->pc = 0x3FED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FED14u;
    // 0x3fed18: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FE6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FE6B8u, 0x3FED14u, 0x3FED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FED1Cu;
label_3fed1c:
    // 0x3fed1c: 0x1000004b  b           . + 4 + (0x4B << 2)
label_3fed20:
    if (ctx->pc == 0x3FED20u) {
        ctx->pc = 0x3FED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED1Cu;
        // 0x3fed20: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED24u;
        goto label_3fed24;
    }
    ctx->pc = 0x3FED1Cu;
    {
        const bool branch_taken_0x3fed1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED1Cu;
        // 0x3fed20: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed1c) {
            ctx->pc = 0x3FEE4Cu;
            return;
        }
    }
    ctx->pc = 0x3FED24u;
label_3fed24:
    // 0x3fed24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fed28:
    // 0x3fed28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fed28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fed2c:
    // 0x3fed2c: 0xc0ffa70  jal         func_3FE9C0
label_3fed30:
    if (ctx->pc == 0x3FED30u) {
        ctx->pc = 0x3FED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED2Cu;
        // 0x3fed30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED34u;
        goto label_3fed34;
    }
    ctx->pc = 0x3FED2Cu;
    SET_GPR_U32(ctx, 31, 0x3FED34u);
    ctx->pc = 0x3FED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FED2Cu;
    // 0x3fed30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FE9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FE9C0u, 0x3FED2Cu, 0x3FED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FED34u;
label_3fed34:
    // 0x3fed34: 0x10000045  b           . + 4 + (0x45 << 2)
label_3fed38:
    if (ctx->pc == 0x3FED38u) {
        ctx->pc = 0x3FED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED34u;
        // 0x3fed38: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED3Cu;
        goto label_3fed3c;
    }
    ctx->pc = 0x3FED34u;
    {
        const bool branch_taken_0x3fed34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED34u;
        // 0x3fed38: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed34) {
            ctx->pc = 0x3FEE4Cu;
            return;
        }
    }
    ctx->pc = 0x3FED3Cu;
label_3fed3c:
    // 0x3fed3c: 0xc0ea146  jal         func_3A8518
label_3fed40:
    if (ctx->pc == 0x3FED40u) {
        ctx->pc = 0x3FED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED3Cu;
        // 0x3fed40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED44u;
        goto label_3fed44;
    }
    ctx->pc = 0x3FED3Cu;
    SET_GPR_U32(ctx, 31, 0x3FED44u);
    ctx->pc = 0x3FED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FED3Cu;
    // 0x3fed40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FED3Cu, 0x3FED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FED44u;
label_3fed44:
    // 0x3fed44: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3fed48:
    if (ctx->pc == 0x3FED48u) {
        ctx->pc = 0x3FED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED44u;
        // 0x3fed48: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED4Cu;
        goto label_3fed4c;
    }
    ctx->pc = 0x3FED44u;
    {
        const bool branch_taken_0x3fed44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED44u;
        // 0x3fed48: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed44) {
            ctx->pc = 0x3FED70u;
            goto label_3fed70;
        }
    }
    ctx->pc = 0x3FED4Cu;
label_3fed4c:
    // 0x3fed4c: 0x2664001c  addiu       $a0, $s3, 0x1C
    ctx->pc = 0x3fed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_3fed50:
    // 0x3fed50: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3fed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3fed54:
    // 0x3fed54: 0xc0e4060  jal         func_390180
label_3fed58:
    if (ctx->pc == 0x3FED58u) {
        ctx->pc = 0x3FED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED54u;
        // 0x3fed58: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED5Cu;
        goto label_3fed5c;
    }
    ctx->pc = 0x3FED54u;
    SET_GPR_U32(ctx, 31, 0x3FED5Cu);
    ctx->pc = 0x3FED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FED54u;
    // 0x3fed58: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FED54u, 0x3FED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FED5Cu;
label_3fed5c:
    // 0x3fed5c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_3fed60:
    if (ctx->pc == 0x3FED60u) {
        ctx->pc = 0x3FED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED5Cu;
        // 0x3fed60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED64u;
        goto label_3fed64;
    }
    ctx->pc = 0x3FED5Cu;
    {
        const bool branch_taken_0x3fed5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED5Cu;
        // 0x3fed60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed5c) {
            ctx->pc = 0x3FEE48u;
            return;
        }
    }
    ctx->pc = 0x3FED64u;
label_3fed64:
    // 0x3fed64: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x3fed64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_3fed68:
    // 0x3fed68: 0x10000037  b           . + 4 + (0x37 << 2)
label_3fed6c:
    if (ctx->pc == 0x3FED6Cu) {
        ctx->pc = 0x3FED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED68u;
        // 0x3fed6c: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED70u;
        goto label_3fed70;
    }
    ctx->pc = 0x3FED68u;
    {
        const bool branch_taken_0x3fed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED68u;
        // 0x3fed6c: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed68) {
            ctx->pc = 0x3FEE48u;
            return;
        }
    }
    ctx->pc = 0x3FED70u;
label_3fed70:
    // 0x3fed70: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3fed70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3fed74:
    // 0x3fed74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fed74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3fed78:
    // 0x3fed78: 0x10000033  b           . + 4 + (0x33 << 2)
label_3fed7c:
    if (ctx->pc == 0x3FED7Cu) {
        ctx->pc = 0x3FED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED78u;
        // 0x3fed7c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED80u;
        goto label_3fed80;
    }
    ctx->pc = 0x3FED78u;
    {
        const bool branch_taken_0x3fed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED78u;
        // 0x3fed7c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fed78) {
            ctx->pc = 0x3FEE48u;
            return;
        }
    }
    ctx->pc = 0x3FED80u;
label_3fed80:
    // 0x3fed80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fed80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fed84:
    // 0x3fed84: 0xc0e90ca  jal         func_3A4328
label_3fed88:
    if (ctx->pc == 0x3FED88u) {
        ctx->pc = 0x3FED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED84u;
        // 0x3fed88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FED8Cu;
        goto label_3fed8c;
    }
    ctx->pc = 0x3FED84u;
    SET_GPR_U32(ctx, 31, 0x3FED8Cu);
    ctx->pc = 0x3FED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FED84u;
    // 0x3fed88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FED84u, 0x3FED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FED8Cu;
label_3fed8c:
    // 0x3fed8c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x3fed8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3fed90:
    // 0x3fed90: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3fed90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fed94:
    // 0x3fed94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fed94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fed98:
    // 0x3fed98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fed98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fed9c:
    // 0x3fed9c: 0xc0e911e  jal         func_3A4478
label_3feda0:
    if (ctx->pc == 0x3FEDA0u) {
        ctx->pc = 0x3FEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FED9Cu;
        // 0x3feda0: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEDA4u;
        goto label_3feda4;
    }
    ctx->pc = 0x3FED9Cu;
    SET_GPR_U32(ctx, 31, 0x3FEDA4u);
    ctx->pc = 0x3FEDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FED9Cu;
    // 0x3feda0: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3FED9Cu, 0x3FEDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEDA4u;
label_3feda4:
    // 0x3feda4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3feda4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3feda8:
    // 0x3feda8: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x3feda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_3fedac:
    // 0x3fedac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fedacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fedb0:
    // 0x3fedb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fedb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fedb4:
    // 0x3fedb4: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3fedb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3fedb8:
    // 0x3fedb8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3fedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3fedbc:
    // 0x3fedbc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3fedbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_3fedc0:
    // 0x3fedc0: 0xc0e862e  jal         func_3A18B8
label_3fedc4:
    if (ctx->pc == 0x3FEDC4u) {
        ctx->pc = 0x3FEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDC0u;
        // 0x3fedc4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEDC8u;
        goto label_3fedc8;
    }
    ctx->pc = 0x3FEDC0u;
    SET_GPR_U32(ctx, 31, 0x3FEDC8u);
    ctx->pc = 0x3FEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEDC0u;
    // 0x3fedc4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3FEDC0u, 0x3FEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEDC8u;
label_3fedc8:
    // 0x3fedc8: 0x10000020  b           . + 4 + (0x20 << 2)
label_3fedcc:
    if (ctx->pc == 0x3FEDCCu) {
        ctx->pc = 0x3FEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDC8u;
        // 0x3fedcc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEDD0u;
        goto label_3fedd0;
    }
    ctx->pc = 0x3FEDC8u;
    {
        const bool branch_taken_0x3fedc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDC8u;
        // 0x3fedcc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fedc8) {
            ctx->pc = 0x3FEE4Cu;
            return;
        }
    }
    ctx->pc = 0x3FEDD0u;
label_3fedd0:
    // 0x3fedd0: 0xc0ea146  jal         func_3A8518
label_3fedd4:
    if (ctx->pc == 0x3FEDD4u) {
        ctx->pc = 0x3FEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDD0u;
        // 0x3fedd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEDD8u;
        goto label_3fedd8;
    }
    ctx->pc = 0x3FEDD0u;
    SET_GPR_U32(ctx, 31, 0x3FEDD8u);
    ctx->pc = 0x3FEDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEDD0u;
    // 0x3fedd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FEDD0u, 0x3FEDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEDD8u;
label_3fedd8:
    // 0x3fedd8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3feddc:
    if (ctx->pc == 0x3FEDDCu) {
        ctx->pc = 0x3FEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDD8u;
        // 0x3feddc: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEDE0u;
        goto label_3fede0;
    }
    ctx->pc = 0x3FEDD8u;
    {
        const bool branch_taken_0x3fedd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fedd8) {
            ctx->pc = 0x3FEDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FEDD8u;
            // 0x3feddc: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FEDF8u;
            goto label_3fedf8;
        }
    }
    ctx->pc = 0x3FEDE0u;
label_3fede0:
    // 0x3fede0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3fede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3fede4:
    // 0x3fede4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3fede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3fede8:
    // 0x3fede8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3fede8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_3fedec:
    // 0x3fedec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3fedecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3fedf0:
    // 0x3fedf0: 0x10000015  b           . + 4 + (0x15 << 2)
label_3fedf4:
    if (ctx->pc == 0x3FEDF4u) {
        ctx->pc = 0x3FEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDF0u;
        // 0x3fedf4: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEDF8u;
        goto label_3fedf8;
    }
    ctx->pc = 0x3FEDF0u;
    {
        const bool branch_taken_0x3fedf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDF0u;
        // 0x3fedf4: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fedf0) {
            ctx->pc = 0x3FEE48u;
            return;
        }
    }
    ctx->pc = 0x3FEDF8u;
label_3fedf8:
    // 0x3fedf8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3fedf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3fedfc:
    // 0x3fedfc: 0x10000012  b           . + 4 + (0x12 << 2)
label_3fee00:
    if (ctx->pc == 0x3FEE00u) {
        ctx->pc = 0x3FEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDFCu;
        // 0x3fee00: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEE04u;
        goto label_3fee04;
    }
    ctx->pc = 0x3FEDFCu;
    {
        const bool branch_taken_0x3fedfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEDFCu;
        // 0x3fee00: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fedfc) {
            ctx->pc = 0x3FEE48u;
            return;
        }
    }
    ctx->pc = 0x3FEE04u;
label_3fee04:
    // 0x3fee04: 0x2670001c  addiu       $s0, $s3, 0x1C
    ctx->pc = 0x3fee04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_3fee08:
    // 0x3fee08: 0xc0e4060  jal         func_390180
label_3fee0c:
    if (ctx->pc == 0x3FEE0Cu) {
        ctx->pc = 0x3FEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEE08u;
        // 0x3fee0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEE10u;
        goto label_3fee10;
    }
    ctx->pc = 0x3FEE08u;
    SET_GPR_U32(ctx, 31, 0x3FEE10u);
    ctx->pc = 0x3FEE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEE08u;
    // 0x3fee0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FEE08u, 0x3FEE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEE10u;
label_3fee10:
    // 0x3fee10: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_3fee14:
    if (ctx->pc == 0x3FEE14u) {
        ctx->pc = 0x3FEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEE10u;
        // 0x3fee14: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEE18u;
        goto label_3fee18;
    }
    ctx->pc = 0x3FEE10u;
    {
        const bool branch_taken_0x3fee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fee10) {
            ctx->pc = 0x3FEE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FEE10u;
            // 0x3fee14: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FEE4Cu;
            return;
        }
    }
    ctx->pc = 0x3FEE18u;
label_3fee18:
    // 0x3fee18: 0xc0e4060  jal         func_390180
label_3fee1c:
    if (ctx->pc == 0x3FEE1Cu) {
        ctx->pc = 0x3FEE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEE18u;
        // 0x3fee1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEE20u;
        goto label_3fee20;
    }
    ctx->pc = 0x3FEE18u;
    SET_GPR_U32(ctx, 31, 0x3FEE20u);
    ctx->pc = 0x3FEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEE18u;
    // 0x3fee1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FEE18u, 0x3FEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEE20u;
label_3fee20:
    // 0x3fee20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3fee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fee24:
    // 0x3fee24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3fee24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fee28:
    // 0x3fee28: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3fee28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3fee2c:
    // 0x3fee2c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3fee2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3fee30:
    // 0x3fee30: 0x8c6700cc  lw          $a3, 0xCC($v1)
    ctx->pc = 0x3fee30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3fee34:
    // 0x3fee34: 0xe0f809  jalr        $a3
label_3fee38:
    if (ctx->pc == 0x3FEE38u) {
        ctx->pc = 0x3FEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEE34u;
        // 0x3fee38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FEE3Cu;
        goto label_3fee3c;
    }
    ctx->pc = 0x3FEE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x3FEE3Cu);
        ctx->pc = 0x3FEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEE34u;
        // 0x3fee38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEE34u, 0x3FEE3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FEE3Cu;
label_3fee3c:
    // 0x3fee3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fee40:
    // 0x3fee40: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x3fee40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_3fee44:
    // 0x3fee44: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x3fee44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x3fee48u;
}
